#include <stdio.h>
#include <locale.h>
#include <string.h> // Para usar strcspn

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idade;
    char nome[22];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Sua idade é: %d\n", idade);

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o '\n' do final da string
    printf("Nome completo digitado: %s\n", nome);

    printf("Pressione Enter para finalizar...");
    getchar();
    return 0;
}