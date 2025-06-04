#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade = 20;
    char *resultado;

    // Operador ternário para verificar a idade
    resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

    printf("Resultado: %s\n", resultado);

    return 0;
}   