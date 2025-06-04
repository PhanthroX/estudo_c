#include <stdio.h>
#include <locale.h>
<<<<<<< HEAD
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
=======
#include <string.h> 

int main() {
  int num1 = 10, num2 = 20;
  int maior;

  maior = (num1 > num2) ? num1 : num2;

  printf("O maior número é: %d\n", maior);

  return 0;
}
>>>>>>> origin
