#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // ------------------------------
    // Nível Novato - Tabuleiro 5x5
    // ------------------------------

    int tabuleiro_novato[5][5] = {0}; // Inicializa tabuleiro com 0 (vazio)

    // Navio vertical (coluna fixa 2)
    for (int i = 0; i < 3; i++) {
        tabuleiro_novato[i][2] = 1; // Marca com 1
        printf("Navio Vertical: (%d, %d)\n", i, 2);
    }

    // Navio horizontal (linha fixa 4)
    for (int j = 0; j < 4; j++) {
        tabuleiro_novato[4][j] = 2; // Marca com 2
        printf("Navio Horizontal: (%d, %d)\n", 4, j);
    }

    // ------------------------------
    // Nível Aventureiro - Tabuleiro 10x10
    // ------------------------------

    int tabuleiro_aventureiro[10][10] = {0};

    // Navio horizontal na linha 1
    for (int j = 0; j < 4; j++) {
        tabuleiro_aventureiro[1][j] = 3;
    }

    // Navio vertical na coluna 6
    for (int i = 5; i < 9; i++) {
        tabuleiro_aventureiro[i][6] = 3;
    }

    // Navio na diagonal principal (de cima esquerda para baixo direita)
    for (int i = 0; i < 4; i++) {
        tabuleiro_aventureiro[i][i] = 3;
    }

    // Navio na diagonal secundária (de cima direita para baixo esquerda)
    for (int i = 0; i < 4; i++) {
        tabuleiro_aventureiro[i][9 - i] = 3;
    }

    // Exibe o tabuleiro aventureiro
    printf("\nTabuleiro Aventureiro (10x10):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro_aventureiro[i][j]);
        }
        printf("\n");
    }

    // ------------------------------
    // Nível Mestre - Habilidades Especiais
    // ------------------------------

    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    int octaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    // Exibe habilidades
    printf("\nHabilidade: Cone\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade: Octaedro\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade: Cruz\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
