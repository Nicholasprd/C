#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        // Verifica se a posição atual é par ou ímpar
        if (i % 2 == 0) {
            vetor[i] = 0;
        } else {
            vetor[i] = 1;
        }
    }

    // Exibe o vetor preenchido
    printf("Vetor: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}