#include <stdio.h>

int main() {
    float vendas[2][2];
    int i, j, opcao;
    float totalFilial[2] = {0}, totalMes[2] = {0}, totalGeral = 0;

    // Leitura da matriz de vendas
    printf("=== Vendas ===\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Filial %d, Mes %d: R$ ", i + 1, j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

    // Menu
    do {
        printf("\n=== MENU ===\n");
        printf("1) Total por filial\n");
        printf("2) Total por mes\n");
        printf("3) Total geral\n");
        printf("0) Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                for (i = 0; i < 2; i++) {
                    totalFilial[i] = 0;
                    for (j = 0; j < 2; j++) {
                        totalFilial[i] += vendas[i][j];
                    }
                    printf("Total da Filial %d: R$ %.2f\n", i + 1, totalFilial[i]);
                }
                break;

            case 2:
                for (j = 0; j < 2; j++) {
                    totalMes[j] = 0;
                    for (i = 0; i < 2; i++) {
                        totalMes[j] += vendas[i][j];
                    }
                    printf("Total do Mes %d: R$ %.2f\n", j + 1, totalMes[j]);
                }
                break;

            case 3:
                totalGeral = 0;
                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 2; j++) {
                        totalGeral += vendas[i][j];
                    }
                }
                printf("Total geral das vendas: R$ %.2f\n", totalGeral);
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
