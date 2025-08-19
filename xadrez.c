#include <stdio.h>
#include <string.h>

// --------------------------------------
// Torre: movimento reto (recursividade)
// --------------------------------------
void moverTorreRecursiva(int casas, char direcao[]) {
    if (casas <= 0) return;

    printf("%s\n", direcao);
    moverTorreRecursiva(casas - 1, direcao);
}

// ------------------------------------------------
// Bispo: recursividade + loops aninhados complexos
// ------------------------------------------------
void moverBispoRecursivo(int casas, char direcao[]) {
    if (casas <= 0) return;

    printf("%s\n", direcao);
    moverBispoRecursivo(casas - 1, direcao);
}

void moverBispoComLoops(int movimentosVerticais, int movimentosHorizontais) {
    for (int i = 0; i < movimentosVerticais; i++) {
        for (int j = 0; j < movimentosHorizontais; j++) {
            printf("Cima Direita\n"); // ou qualquer outra direção diagonal
        }
    }
}

// --------------------------------------
// Rainha: movimento qualquer (recursivo)
// --------------------------------------
void moverRainhaRecursiva(int casas, char direcao[]) {
    if (casas <= 0) return;

    printf("%s\n", direcao);
    moverRainhaRecursiva(casas - 1, direcao);
}

// ------------------------------------------------
// Cavalo: movimento em L com loops aninhados
// Direção: 2 casas para cima, 1 para a direita
// ------------------------------------------------
void moverCavaloComplexo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i <= movimentosVerticais; i++) {
        if (i == 2) {
            // Movimento completo na vertical
            int j = 0;
            while (j <= movimentosHorizontais) {
                if (j == 1) {
                    printf("Direita\n");
                    break; // Movimento do cavalo completo
                }
                j++;
            }
        } else {
            printf("Cima\n");
            continue; // Próximo passo na vertical
        }
    }
}

// -------------------------
// Função principal
// -------------------------
int main() {
    // Número de casas
    int casasTorre = 3;
    int casasBispo = 2;
    int casasRainha = 4;

    // Direções fixas
    char direcaoTorre[] = "Direita";
    char direcaoBispo[] = "Baixo Esquerda";
    char direcaoRainha[] = "Cima";

    // -----------------------------------
    // Movimento da Torre (recursividade)
    // -----------------------------------
    printf("Movimento da Torre:\n");
    moverTorreRecursiva(casasTorre, direcaoTorre);

    // -----------------------------------------
    // Movimento do Bispo (recursivo e com loops)
    // -----------------------------------------
    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo, direcaoBispo);

    printf("\nMovimento do Bispo (com loops):\n");
    moverBispoComLoops(1, 2); // Ex: 1 passo vertical, 2 horizontais (simula diagonal)

    // -----------------------------------
    // Movimento da Rainha (recursividade)
    // -----------------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursiva(casasRainha, direcaoRainha);

    // -----------------------------------
    // Movimento do Cavalo (loops complexos)
    // -----------------------------------
    moverCavaloComplexo();

    return 0;
}

