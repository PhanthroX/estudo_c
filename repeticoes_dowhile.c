#include <stdio.h>

    /*
    O do-while é uma estrutura de repetição poderosa e flexível que garante a execução do bloco de código pelo menos uma vez. 
    Isso o torna ideal para situações em que as ações iniciais precisam ocorrer antes de qualquer verificação de condição. 
    Comparado ao loop while, o do-while oferece uma abordagem diferente, que pode ser mais adequada em determinados contextos, 
    como na interação com o usuário e na implementação de menus interativos. 
    Entender e saber quando usar do-while é uma habilidade importante para qualquer programador, adicionando uma ferramenta valiosa ao seu repertório de programação.
    */
    int  main() {

    int option;

    do {
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Você escolheu a opção 1\n");
            break;
        case 2:
            printf("Você escolheu a opção 2\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    } while (option != 3);

    return 0;
}