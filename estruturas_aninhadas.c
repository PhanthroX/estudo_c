#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade inválida.\n");
    } else if (idade < 18) {
        printf("Você é menor de idade.\n");
    } else if (idade < 60) {
        printf("Você é adulto.\n");
    } else {
        printf("Você é idoso.\n");
    }
}