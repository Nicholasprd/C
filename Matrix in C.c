//Faça um programa em C que leia um vetor bidimensional (matriz – M[3][3]) de inteiros. Calcule a média dos elementos digitados e verifique quantos números digitados estão abaixo da média. Mostre-a no formato tabular.

#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;
    int abaixo_media = 0;

    printf("Informe os elementos da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    float media = (float)soma / 9;

    printf("Matriz informada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
            if (matriz[i][j] < media) {
                abaixo_media++;
            }
        }
        printf("\n");
    }

    printf("Média dos elementos: %.2f\n", media);
    printf("Números abaixo da média: %d\n", abaixo_media);

    return 0;
}