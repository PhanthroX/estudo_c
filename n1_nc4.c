#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int idade = 27;
    int quantidade;
    float altura = 1.75;
    double salario = 3000.50;
    char opcao = 'S';
    char nome[20] = "Matheus";

    printf("A idade do %s: %d\n", nome, idade);
    printf("A altura é: %e\n", altura);
    printf("A opção é: %c\n", opcao);





}
