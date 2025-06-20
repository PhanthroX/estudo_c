#include <stdio.h>

#define TAMANHO 10
#define TAM_HABILIDADE 5

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;  // Inicializa tudo com água
        }
    }
}

void posicionarNavios(int tabuleiro[TAMANHO][TAMANHO]) {
    // Navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][4 + i] = 3;
    }

    // Navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][7] = 3;
    }
}

void criarCone(int cone[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (i >= j && i >= TAM_HABILIDADE - 1 - j) {
                cone[i][j] = 1;  // Parte do cone
            } else {
                cone[i][j] = 0;
            }
        }
    }
}

void criarCruz(int cruz[TAM_HABILIDADE][TAM_HABILIDADE]) {
    int centro = TAM_HABILIDADE / 2;
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (i == centro || j == centro) {
                cruz[i][j] = 1;  // Parte da cruz
            } else {
                cruz[i][j] = 0;
            }
        }
    }
}

void criarOctaedro(int octaedro[TAM_HABILIDADE][TAM_HABILIDADE]) {
    int centro = TAM_HABILIDADE / 2;
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            if (abs(i - centro) + abs(j - centro) <= centro) {
                octaedro[i][j] = 1;  // Parte do octaedro (losango)
            } else {
                octaedro[i][j] = 0;
            }
        }
    }
}

void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int habilidade[TAM_HABILIDADE][TAM_HABILIDADE], int origemLinha, int origemColuna) {
    int centro = TAM_HABILIDADE / 2;

    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            int linhaTab = origemLinha + (i - centro);
            int colunaTab = origemColuna + (j - centro);

            // Verifica se está dentro dos limites do tabuleiro
            if (linhaTab >= 0 && linhaTab < TAMANHO && colunaTab >= 0 && colunaTab < TAMANHO) {
                if (habilidade[i][j] == 1 && tabuleiro[linhaTab][colunaTab] == 0) {
                    tabuleiro[linhaTab][colunaTab] = 5;  // Marca área afetada
                }
            }
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nTabuleiro Atual:\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    int cone[TAM_HABILIDADE][TAM_HABILIDADE];
    int cruz[TAM_HABILIDADE][TAM_HABILIDADE];
    int octaedro[TAM_HABILIDADE][TAM_HABILIDADE];

    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);

    criarCone(cone);
    criarCruz(cruz);
    criarOctaedro(octaedro);

    // Aplicar habilidades no tabuleiro em posições definidas
    aplicarHabilidade(tabuleiro, cone, 1, 1);        // Exemplo: cone com origem em (1,1)
    aplicarHabilidade(tabuleiro, cruz, 4, 4);        // Exemplo: cruz com origem em (4,4)
    aplicarHabilidade(tabuleiro, octaedro, 7, 7);    // Exemplo: octaedro com origem em (7,7)

    exibirTabuleiro(tabuleiro);

    return 0;
}