
#include <stdio.h>
#include <string.h> // Para comparar strings (strcmp)

// -------------------------
// Torre: usa estrutura FOR
// -------------------------
void moverTorre(int casas, char direcao[]) {
    printf("\nMovimento da Torre:\n");

    for (int i = 0; i < casas; i++) {
        if (strcmp(direcao, "Cima") == 0) {
            printf("Cima\n");
        } else if (strcmp(direcao, "Baixo") == 0) {
            printf("Baixo\n");
        } else if (strcmp(direcao, "Esquerda") == 0) {
            printf("Esquerda\n");
        } else if (strcmp(direcao, "Direita") == 0) {
            printf("Direita\n");
        }
    }
}

// --------------------------
// Bispo: usa estrutura DO-WHILE
// --------------------------
void moverBispo(int casas, char direcao[]) {
    int i = 0;

    printf("\nMovimento do Bispo:\n");

    do {
        if (strcmp(direcao, "Cima Direita") == 0) {
            printf("Cima Direita\n");
        } else if (strcmp(direcao, "Cima Esquerda") == 0) {
            printf("Cima Esquerda\n");
        } else if (strcmp(direcao, "Baixo Direita") == 0) {
            printf("Baixo Direita\n");
        } else if (strcmp(direcao, "Baixo Esquerda") == 0) {
            printf("Baixo Esquerda\n");
        }
        i++;
    } while (i < casas);
}

// -------------------------
// Rainha: usa estrutura WHILE
// -------------------------
void moverRainha(int casas, char direcao[]) {
    int i = 0;

    printf("\nMovimento da Rainha:\n");

    while (i < casas) {
        // Rainha pode fazer qualquer movimento: reto ou diagonal
        printf("%s\n", direcao);
        i++;
    }
}

// -------------------------
// Função principal
// -------------------------
int main() {
    // Número de casas a mover para cada peça
    int casasTorre = 3;
    int casasBispo = 2;
    int casasRainha = 4;

    // Direções fixas (sem entrada do usuário)
    char direcaoTorre[] = "Direita";
    char direcaoBispo[] = "Cima Esquerda";
    char direcaoRainha[] = "Baixo";

    // Chama as funções de movimento
    moverTorre(casasTorre, direcaoTorre);
    moverBispo(casasBispo, direcaoBispo);
    moverRainha(casasRainha, direcaoRainha);

    return 0;
}
