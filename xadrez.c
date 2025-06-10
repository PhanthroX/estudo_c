#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Estrutura recursiva para aplicar as movimentações para cada peça.
void movimentoBisbo(int bispo){
    if (bispo <= 5) {
        printf("Bispo: Moveu-se para a direita diagonal %dª casa(s).\n", bispo);
        movimentoBisbo(bispo + 1); // Chamada recursiva para a próxima casa
        
    }
}

void movimentoTorre(int torre){
    if (torre <= 5) {
        printf("Torre: Moveu-se para a direita %dª casa(s).\n", torre);
        movimentoTorre(torre + 1); // Chamada recursiva para a próxima casa
        
    }
}

void movimentoRainha(int rainha){
    if (rainha <= 8) {
        printf("Rainha: Mouveu-se para a esquerda %dª casa(s). \n", rainha);
        movimentoRainha(rainha + 1); // Chamada recursiva para a próxima casa
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    /*
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
        */

    // Implementação de Movimentação do Bispo

        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    /*
    int i = 0;
    while (i < bispo){
    i++;
    //Simula o movimento do Bispo para a direita diagonal
    printf("Bispo: Moveu-se para a direita diagonal %dª casa(s).\n", i);
    } 
        */
    

    // Implementação de Movimentação da Torre

    /*
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for (int t = 0; t < torre; t++) {
        // Simula o movimento da Torre para a direita
        printf("Torre: Moveu-se para a direita %dª casa(s).\n", t + 1);
    }
        */

    // Implementação de Movimentação da Rainha

    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    /*
    int i = 1;
    do {
        printf("Rainha: Mouveu-se para a esquerda %dª casa(s). \n", i);
        i++;
    } while (i <= rainha);
        */

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    /*
    int cavalCima = 2; // Movimento horizontal do Cavalo
    int cavaloDireita = 1;   // Movimento vertical do Cavalo
    for (int b = 0; b < cavalCima; b++) {
        // Simula o movimento do Cavalo para cima
        printf("Cavalo: Moveu-se %dª casa(s) para cima.\n", b + 1);
        if (b == 1) {
            // Se o Cavalo já se moveu 2 casas para cima, ele pode se mover para a direita
            for (int e = 0; e < cavaloDireita; e++) {
                // Simula o movimento do Cavalo em L
                printf("Cavalo: Moveu-se %dª casa(s) para a direita.\n", e + 1);
            }
        }
    }
        */

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

        // Chamada recursiva para movimento do bispo
    movimentoBisbo(1);
        // Chamada recursiva para movimento da torre
    movimentoTorre(1);
        // Chamada recursiva para movimento da rainha
    movimentoRainha(1);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
        // Loop externo: simula o movimento para cima (2 casas)
    for (int cima = 2; cima <= 2; cima++) {
        // Loop interno: simula o movimento para a direita (1 casa)
        for (int direita = 1; direita <= 1; direita++) {
            
            // Condição inválida: se cima ou direita for maior que 8 (tabuleiro 8x8)
            if (cima > 2 || direita > 1) {
                printf("Movimento inválido.\n");
                continue; // pula para o próximo loop
            }

            // Imprime movimento válido
            printf("Cavalo: Moveu-se %d casa(s) para cima e %d para a direita.\n", cima, direita);

            break; // já executou o movimento desejado
        }
        break; // já fez um movimento válido
    }


    return 0;
}
