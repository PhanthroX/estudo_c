#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a = 10;
    float b = 3.5;
    float resultado = a + b;

    printf("Resultado: %.2f\n", resultado); // 'a' convertido implicitamente para float

    return 1;
}