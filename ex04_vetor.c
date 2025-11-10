#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior, menor, soma = 0;
    double media;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    maior = numeros[0];
    menor = numeros[0];

    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior)
            maior = numeros[i];
        if (numeros[i] < menor)
            menor = numeros[i];
    }

    media = (double)soma / 10;

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
