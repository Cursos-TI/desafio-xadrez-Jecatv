#include <stdio.h>

// Desafio de Xadrez - MateCheck - Nivel Novato: Movimentação do Bispo, Torre e Rainha.


int main() {

    // Constantes para o número de movimentos

    const int MOV_BISPO = 5;   //5 casas diagonal

    const int MOV_TORRE = 5;   //5 casas direita

    const int MOV_RAINHA = 8;  //8 casas esquerda

    printf("Desafio de Xadrez - MateCheck (Nível Novato)\n\n");

    //  Bispo movimentação

    printf("Movimento do Bispo (diagonal superior direita):\n");

    for (int i = 1; i <= MOV_BISPO; i++) {
        
        printf("Passo %d -> Cima-Direita\n", i);
    }
    printf("\n");

    //Torre movimentação

    printf("Movimento da Torre (para a direita):\n");

    for (int i = 1; i <= MOV_TORRE; i++) {

        printf("Passo %d -> Direita\n", i);
    }
    printf("\n");

    //Rainha movimentação

    printf("Movimento da Rainha (para a esquerda):\n");

    for (int i = 1; i <= MOV_RAINHA; i++) {

        printf("Passo %d -> Esquerda\n", i);
    }
    printf("\n");

    printf(" Fim da Simulação (Nível Novato) \n");

    return 0;
}
