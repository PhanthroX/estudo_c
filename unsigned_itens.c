#include <stdio.h>
#include <locale.h>
#include <string.h>
 
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int signedNumber = 3000000000; // Este valor excede o limite de um int normal
    unsigned int unsignedNumber = 3000000000;
 
    printf("Número com sinal: %d\n", signedNumber);
    printf("Número sem sinal: %u\n", unsignedNumber);
 
    return 0;
}