#include <stdio.h>

int main() {
    int N, i, opcao, id[10];
    double salario[10], maiorSalario;
    int idMaior;

    printf("Quantos funcionarios deseja cadastrar (1 a 10)? ");
    scanf("%d", &N);

    if (N < 1 || N > 10) {
        printf("Quantidade invalida! Encerrando.\n");
        return 0;
    }

    // Cadastro dos funcionários
    for (i = 0; i < N; i++) {
        printf("\nFuncionario %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &id[i]);
        printf("Salario: R$ ");
        scanf("%lf", &salario[i]);
    }

    // Menu principal
    do {
        printf("\n=== MENU ===\n");
        printf("1) Listar todos os funcionarios\n");
        printf("2) Mostrar o maior salario e seu ID\n");
        printf("0) Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- Lista de Funcionarios ---\n");
                for (i = 0; i < N; i++) {
                    printf("ID: %d | Salario: R$ %.2f\n", id[i], salario[i]);
                }
                break;

            case 2:
                maiorSalario = salario[0];
                idMaior = id[0];
                for (i = 1; i < N; i++) {
                    if (salario[i] > maiorSalario) {
                        maiorSalario = salario[i];
                        idMaior = id[i];
                    }
                }
                printf("\nMaior salario: R$ %.2f (ID: %d)\n", maiorSalario, idMaior);
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
    
