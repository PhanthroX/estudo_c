#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    int escolhaUsuario, escolhaComputador;
    char *opcoes[] = {"Pedra", "Papel", "Tesoura"};

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    
    printf("Escolha uma opção:\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaUsuario);
    
    // Gera a escolha do computador
    escolhaComputador = rand() % 3;

    // Verifica se a escolha do usuário é válida
    if (escolhaUsuario < 0 || escolhaUsuario > 2) {
        printf("Escolha inválida! Por favor, escolha 0, 1 ou 2.\n");
        return 1; // Encerra o programa com erro
    }
    // Timer para simular o atraso do jogo
    printf("Jogando...\n");
    for (int i = 0; i < 3; i++) {
        fflush(stdout);
        usleep(500000); // Atraso de 0.5 segundos
    }
    printf("\n");

    // Exibe as escolhas
    printf("Você escolheu: %s\n", opcoes[escolhaUsuario]);
    printf("Computador escolheu: %s\n", opcoes[escolhaComputador]);
    printf("\n");
    
    // Verifica o resultado usando switch
    switch (escolhaUsuario) {
        case 0: // Pedra
            switch (escolhaComputador) {
                case 0:
                    printf("Empate!\n");
                    break;
                case 1:
                    printf("Você perdeu!\n");
                    break;
                case 2:
                    printf("Você ganhou!\n");
                    break;
            }
            break;
        case 1: // Papel
            switch (escolhaComputador) {
                case 0:
                    printf("Você ganhou!\n");
                    break;
                case 1:
                    printf("Empate!\n");
                    break;
                case 2:
                    printf("Você perdeu!\n");
                    break;
            }
            break;
        case 2: // Tesoura
            switch (escolhaComputador) {
                case 0:
                    printf("Você perdeu!\n");
                    break;
                case 1:
                    printf("Você ganhou!\n");
                    break;
                case 2:
                    printf("Empate!\n");
                    break;
            }
            break;
        default:
            printf("Escolha inválida!\n");
    }
    
    return 0;
}
