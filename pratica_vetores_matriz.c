#include <stdio.h>

int main() {
    int index;

    char * nomesAlunos[5][5] = {
        {"João", "Pt: 30", "Mat: 90", "Ing: 80"},
        {"Maria", "Pt: 85", "Mat: 70", "Ing: 90"},
        {"Pedro", "Pt: 60", "Mat: 80", "Ing: 75"},
        {"Ana", "Pt: 95", "Mat: 100", "Ing: 85"},
        {"Lucas", "Pt: 70", "Mat: 60", "Ing: 65"}
    };

    printf("Digite o número do aluno que queira ver as notas (1 a 5): ");
    scanf("%d", &index);

    printf("Notas do aluno %s são: %s , %s , %s \n", nomesAlunos[index - 1][0], nomesAlunos[index - 1][1], nomesAlunos[index - 1][2], nomesAlunos[index - 1][3]);

    return 0;
}