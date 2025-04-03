#include <stdio.h>

int main() {
    int x = 5;
    float y = 5.0;
    char c = "a";

    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= y);
    printf("O valor de %c na tabela ASCII é: %d\n", c, c); // Tomar cuidado ao comparar o valor de um caracter, pois será referenciado da tabela ASCII

    return 0;
}