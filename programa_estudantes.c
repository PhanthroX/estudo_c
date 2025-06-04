#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char opcao;
    float nota1, nota2, media;

    while (opcao != '3') {
        switch (opcao) {
            case '1':
                printf("Digite a nota 1: ");
                scanf("%f", &nota1);
                printf("Digite a nota 2: ");
                scanf("%f", &nota2);
                media = (nota1 + nota2) / 2;
                printf("A media do estudante e: %.2f\n", media);
                break;
            case '2':
                if (media >= 6.0) {
                    printf("O estudante esta aprovado.\n");
                } else {
                    printf("O estudante esta reprovado.\n");
                }
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
        printf("\nMenu de gerenciamento de estudantes\n");
        printf("Digite a opcao desejada:\n");
        printf("1 - Calcular media\n");
        printf("2 - Determinar status do estudante\n");
        printf("3 - Sair\n");
        printf("Opcao: ");
        scanf(" %c", &opcao);
    }


    return 0;
}