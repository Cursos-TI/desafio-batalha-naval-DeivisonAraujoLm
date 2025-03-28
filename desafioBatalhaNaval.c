#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Tabuleiro inicial 5x5 preenchido com zeros
    int tabuleiro[5][5] = {0};

    // Posicionando dois navios no tabuleiro
    int navioVerticalX = 1, navioVerticalY = 2; // Coordenadas para o navio vertical
    int navioHorizontalX = 3, navioHorizontalY = 0; // Coordenadas para o navio horizontal

    // Navio vertical (3 células)
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioVerticalX + i][navioVerticalY] = 1;
    }

    // Navio horizontal (3 células)
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioHorizontalX][navioHorizontalY + i] = 1;
    }

    // Exibindo as coordenadas dos navios
    printf("Nível Novato - Coordenadas dos Navios:\n");
    printf("Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navioVerticalX + i, navioVerticalY);
    }
    printf("Navio Horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navioHorizontalX, navioHorizontalY + i);
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Expansão do tabuleiro para 10x10
    int tabuleiroAmpliado[10][10] = {0};

    // Coordenadas dos quatro navios
    int navioDiagonalX1 = 5, navioDiagonalY1 = 5; // Diagonal Descendente
    int navioDiagonalX2 = 7, navioDiagonalY2 = 2; // Diagonal Ascendente

    // Posicionando navios no tabuleiro 10x10
    for (int i = 0; i < 4; i++) {
        tabuleiroAmpliado[navioVerticalX + i][navioVerticalY] = 3; // Vertical
        tabuleiroAmpliado[navioHorizontalX][navioHorizontalY + i] = 3; // Horizontal
        tabuleiroAmpliado[navioDiagonalX1 + i][navioDiagonalY1 + i] = 3; // Diagonal Descendente
        tabuleiroAmpliado[navioDiagonalX2 + i][navioDiagonalY2 - i] = 3; // Diagonal Ascendente
    }

    // Exibindo tabuleiro completo (10x10)
    printf("\nNível Aventureiro - Tabuleiro Completo:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiroAmpliado[i][j]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Habilidade em cone
    printf("\nNível Mestre - Habilidades Especiais:\nCone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || (i == 1 && j == 2) || (i == 0 && j == 2)) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // Habilidade em cruz
    printf("\nCruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // Habilidade em octaedro
    printf("\nOctaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 1 && j == 2) || (i == 3 && j == 2) || (i == 2 && (j == 1 || j == 3)) || (i == 2 && j == 2)) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}