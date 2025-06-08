#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5;
    int torre = 5;
    int rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int i = 0;
    while (i < bispo){
        i++;
        // Simula o movimento do Bispo para a direita diagonal
        printf("Bispo: Moveu-se para a direita diagonal %dª casa(s).\n", i);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for (int t = 0; t < torre; t++) {
        // Simula o movimento da Torre para a direita
        printf("Torre: Moveu-se para a direita %dª casa(s).\n", t + 1);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    i = 1;
    do {
        printf("Rainha: Mouveu-se para a esquerda %dª casa(s). \n", i);
        i++;
    } while (i <= rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int cavaloBaixo = 2; // Movimento horizontal do Cavalo
    int cavaloEsquerda = 1;   // Movimento vertical do Cavalo
    for (int b = 0; b < cavaloBaixo; b++) {
        // Simula o movimento do Cavalo para baixo
        printf("Cavalo: Moveu-se %dª casa(s) para baixo.\n", b + 1);
        if (b == 1) {
            // Se o Cavalo já se moveu 2 casas para baixo, ele pode se mover para a esquerda
            for (int e = 0; e < cavaloEsquerda; e++) {
                // Simula o movimento do Cavalo em L
                printf("Cavalo: Moveu-se %dª casa(s) para a esquerda.\n", e + 1);
            }
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
