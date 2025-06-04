#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int temperatura = 30;
    char *resultado;
    // Operador ternário para verificar a temperatura
    resultado = temperatura > 25 ? "Quente" : "Frio";
    printf("Resultado: %s\n", resultado);
}