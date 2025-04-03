#include <stdio.h>
#include <locale.h>
#include <string.h>
 
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    unsigned long int largePositiveNumber = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long long int numeroGrande = 4000000000;
    int numero = 4000000000;

    printf("Número positivo grande: %lu\n", largePositiveNumber);
    printf("Número positivo: %u\n", numeroPositivo);
    printf("Número grande: %lld\n", numeroGrande);
    printf("Número: %d\n", numero);

    return 0;
}