#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};

    printf("=== Batalha Naval: Nível Novato ===\n");
    printf("Você deve posicionar dois navios:\n");
    printf("- 1 navio vertical de 3 espaços\n");
    printf("- 1 navio horizontal de 4 espaços\n");

    int linha, coluna;

    // Posicionar navio vertical
    printf("\nDigite a linha inicial (0 a 2) para o navio vertical (3 espaços): ");
    scanf("%d", &linha);
    printf("Digite a coluna fixa (0 a 4) para o navio vertical: ");
    scanf("%d", &coluna);

    if (linha >= 0 && linha <= 2 && coluna >= 0 && coluna < 5) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha + i][coluna] = 1;
        }
    } else {
        printf("Posição inválida para o navio vertical!\n");
        return 1;
    }

    // Posicionar navio horizontal
    printf("\nDigite a linha fixa (0 a 4) para o navio horizontal: ");
    scanf("%d", &linha);
    printf("Digite a coluna inicial (0 a 1) para o navio horizontal (4 espaços): ");
    scanf("%d", &coluna);

    if (linha >= 0 && linha < 5 && coluna >= 0 && coluna <= 1) {
        for (int j = 0; j < 4; j++) {
            tabuleiro[linha][coluna + j] = 2;
        }
    } else {
        printf("Posição inválida para o navio horizontal!\n");
        return 1;
    }

    // Exibir o tabuleiro
    printf("\nTabuleiro (5x5):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
