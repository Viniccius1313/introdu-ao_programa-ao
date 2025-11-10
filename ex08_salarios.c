#include <stdio.h>

int main() {
    float salarios[10], soma = 0, media;
    int n, i, opcao;

    do {
        printf("Quantidade de funcionários:  ");
        scanf("%d", &n);
        if (n < 1 || n > 10)
            printf("Valor invalido!\n Digite um número entre 1 e 10.\n");
        
    } while (n < 1 || n > 10);


    for (i = 0; i < n; i++) {
        printf("Digite o salario %d: R$ ", i + 1);
        scanf("%f", &salarios[i]);
    }

    
    do {
        printf("\n=== MENU ===\n");
        printf("1) Listar salarios\n");
        printf("2) Media dos salarios\n");
        printf("3) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- Lista de Salarios ---\n");
                for (i = 0; i < n; i++) {
                    printf("Salario %d: R$ %.2f\n", i + 1, salarios[i]);
                }
                break;

            case 2:
                soma = 0;
                for (i = 0; i < n; i++) {
                    soma += salarios[i];
                }
                media = soma / n;
                printf("Media dos salarios: R$ %.2f\n", media);
                break;

            case 3:
                printf("Pograma encerrado!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                
        }
    } while (opcao != 3);

    return 0;
}
