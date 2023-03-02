#include <stdio.h>

int main() {
    int x[10], y[10], i;

    printf("Digite 10 números inteiros: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            y[i] = x[i] / 2;
        } else {
            y[i] = x[i] * 3;
        }
    }

    printf("Vetor x: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    printf("Vetor y: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", y[i]);
    }
    printf("\n");

    return 0;
  }