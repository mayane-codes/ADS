#include <stdio.h>

#define TAMANHO 10   // Tamanho do tabuleiro (10x10)
#define AGUA 0       // Representa água
#define NAVIO 3      // Representa parte de navio
#define TAM_NAVIO 3  // Tamanho fixo dos navios

// Função para inicializar o tabuleiro com água
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

// Função para verificar se um navio pode ser colocado sem sair do tabuleiro ou sobrepor outro
int podeColocar(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int orientacao, int diagonal) {
    for (int k = 0; k < TAM_NAVIO; k++) {
        int i = linha, j = coluna;

        // Horizontal ou vertical
        if (!diagonal) {
            if (orientacao == 0) j += k;   // horizontal
            else i += k;                   // vertical
        }
        // Diagonal
        else {
            if (orientacao == 0) { i += k; j += k; }   // diagonal principal
            else { i += k; j -= k; }                  // diagonal invertida
        }

        // Verificar limites
        if (i < 0 || i >= TAMANHO || j < 0 || j >= TAMANHO) return 0;

        // Verificar sobreposição
        if (tabuleiro[i][j] == NAVIO) return 0;
    }
    return 1;
}

// Função para colocar o navio no tabuleiro
void colocarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int orientacao, int diagonal) {
    for (int k = 0; k < TAM_NAVIO; k++) {
        int i = linha, j = coluna;

        if (!diagonal) {
            if (orientacao == 0) j += k;   // horizontal
            else i += k;                   // vertical
        }
        else {
            if (orientacao == 0) { i += k; j += k; }   // diagonal principal
            else { i += k; j -= k; }                  // diagonal invertida
        }

        tabuleiro[i][j] = NAVIO;
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\n===== TABULEIRO =====\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    inicializarTabuleiro(tabuleiro);

    // Exemplo fixo de posicionamento:
    // Dois navios normais
    if (podeColocar(tabuleiro, 0, 0, 0, 0)) // linha 0, coluna 0, horizontal
        colocarNavio(tabuleiro, 0, 0, 0, 0);

    if (podeColocar(tabuleiro, 2, 2, 1, 0)) // linha 2, coluna 2, vertical
        colocarNavio(tabuleiro, 2, 2, 1, 0);

    // Dois navios diagonais
    if (podeColocar(tabuleiro, 5, 0, 0, 1)) // diagonal principal
        colocarNavio(tabuleiro, 5, 0, 0, 1);

    if (podeColocar(tabuleiro, 0, 9, 1, 1)) // diagonal invertida
        colocarNavio(tabuleiro, 0, 9, 1, 1);

    // Exibir tabuleiro final
    exibirTabuleiro(tabuleiro);

    return 0;
}
