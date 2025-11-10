#include <stdio.h>

int main() {
    int num, qtd = 0;
    int soma = 0;
    double media;

    printf("Digite numeros inteiros (digite -1 para encerrar):\n");
    

    while (1) {
        scanf("%d", &num);

        if (num == -1)
            break; // sai do loop quando for -1

        soma += num;
        qtd++;
    }

    if (qtd > 0) {
        media = (double)soma / qtd;
        printf("\nQuantidade: %d\n", qtd);
        printf("Soma: %d\n", soma);
        printf("Media: %.2f\n", media);
    } else {
        printf("\nNenhum numero valido foi digitado.\n");
    }

    return 0;
}
