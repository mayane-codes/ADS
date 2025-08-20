#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // 1. Inicializar tabuleiro com água (0)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Coordenadas iniciais dos navios (definidas diretamente no código)
    int linhaNavioH = 2, colunaNavioH = 4; // navio horizontal começa na posição (2,4)
    int linhaNavioV = 6, colunaNavioV = 1; // navio vertical começa na posição (6,1)

    // 3. Validar se o navio horizontal cabe no tabuleiro
    if (colunaNavioH + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        for (int j = 0; j < TAMANHO_NAVIO; j++) {
            tabuleiro[linhaNavioH][colunaNavioH + j] = 3;
        }
    } else {
        printf("Erro: navio horizontal nao cabe no tabuleiro!\n");
    }

    // 4. Validar se o navio vertical cabe no tabuleiro
    if (linhaNavioV + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            // Verificar sobreposição antes de posicionar
            if (tabuleiro[linhaNavioV + i][colunaNavioV] == 0) {
                tabuleiro[linhaNavioV + i][colunaNavioV] = 3;
            } else {
                printf("Erro: navios sobrepostos detectados!\n");
                break;
            }
        }
    } else {
        printf("Erro: navio vertical nao cabe no tabuleiro!\n");
    }

    // 5. Exibir tabuleiro
    printf("\nTabuleiro Batalha Naval:\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
