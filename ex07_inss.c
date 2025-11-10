#include <stdio.h>

int main()
{
    float salario, inss, valorHora, horasExtras, valorExtras;
    int opcao;

    printf("Digite seu salário mensal: ");
    scanf("%f", &salario);

    do {
        printf("\n=== MENU ===\n");
        printf("1) Calcular seu INSS \n");
        printf("2) Calcular valor das horas extras\n");
        printf("3) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        

        switch (opcao) {
            case 1:
                inss = salario * 0.08;
                printf("INSS: R$ %.2f\n", inss);
                break;

            case 2:
                printf("Informe o numero de horas extras: ");
                scanf("%f", &horasExtras);
                valorHora = salario / 220.0;
                valorExtras = horasExtras * valorHora * 1.5; 
                printf("Valor das horas extras: R$ %.2f\n", valorExtras);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
