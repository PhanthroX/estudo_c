#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a = 10;
    int b = 3;
    float quociente = (float) a / b; 

    printf("Resultado: %.2f\n", quociente); // 'a' é explicitamente convertido para float

    return 0;
}