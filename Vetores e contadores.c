#include <stdio.h>

int main() {
    int vetor[10], i;
    int qtd_pares = 0, qtd_impares = 0, qtd_positivos = 0, qtd_negativos = 0, qtd_zeros=0;

    printf("Digite 10 números inteiros: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            qtd_pares++;
        } else {
            qtd_impares++;
        }

        if (vetor[i] > 0) {
            qtd_positivos++;
        } else if (vetor[i] < 0) {
            qtd_negativos++;
          }
          else{
            qtd_zeros++;
          }
        }

    printf("Quantidade de números pares: %d\n", qtd_pares);
    printf("Quantidade de números ímpares: %d\n", qtd_impares);
    printf("Quantidade de números positivos: %d\n", qtd_positivos);
    printf("Quantidade de números negativos: %d\n", qtd_negativos);

    return 0;
}