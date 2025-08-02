#include <stdio.h>

// Constantes para número de casas que cada peça deve se mover
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// ==================== NÍVEL NOVATO ====================
// Função recursiva para mover o bispo (diagonal = cima + direita)
void moverBispoRecursivo(int passo) {
    if (passo > BISPO_MOV) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(passo + 1);
}

// Função recursiva para mover a torre (direita)
void moverTorreRecursiva(int passo) {
    if (passo > TORRE_MOV) return;
    printf("Direita\n");
    moverTorreRecursiva(passo + 1);
}

// Função recursiva para mover a rainha (esquerda)
void moverRainhaRecursiva(int passo) {
    if (passo > RAINHA_MOV) return;
    printf("Esquerda\n");
    moverRainhaRecursiva(passo + 1);
}

// ==================== NÍVEL AVENTUREIRO ====================
// Mover o cavalo em L (baixo + esquerda) usando loops aninhados
void moverCavaloL() {
    printf("\nMovimentação do Cavalo (nível Aventureiro):\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        int j = 0;
        while (j < 1) {
            printf("Esquerda\n");
            j++;
        }
    }
}

// ==================== NÍVEL MESTRE ====================
// Cavalo usando loops com variáveis múltiplas e uso de continue/break
void moverCavaloMestre() {
    printf("\nMovimentação do Cavalo (nível Mestre):\n");
    for (int i = 0, j = 0; i < 2 && j < 2; i++, j++) {
        if (i == 1) continue; // simula desvio na movimentação
        printf("Cima\n");
        printf("Direita\n");
        break; // após um movimento em L, para
    }
}

// ==================== MAIN ====================
int main() {
    printf("Desafio MateCheck - Nível Novato:\n");

    printf("\nMovimentação do Bispo:\n");
    moverBispoRecursivo(1);

    printf("\nMovimentação da Torre:\n");
    moverTorreRecursiva(1);

    printf("\nMovimentação da Rainha:\n");
    moverRainhaRecursiva(1);

    moverCavaloL();
    moverCavaloMestre();

    return 0;
}
