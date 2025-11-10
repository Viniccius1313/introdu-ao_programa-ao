#include <stdio.h>

int main()
{
    int n, i;
    int primo = 1;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for(i=2; i<=n / 2; i++){
        if (n % i == 0){
            primo = 0;
            break;
        }
    }
    
    if (primo)
        printf("%d é primo.\n", n);
    else
        printf("%d nao é primo.\n O Menor divisor é %d.\n", n, i);
   

 return 0;
}
