#include <stdio.h>
#include <ctype.h>  

int main() {
    char texto[101];
    int i, qtdVogais = 0;
    char letra;

    printf("Digite uma linha (até 100 caracteres):\n");
    fgets(texto, 101, stdin);  

    for (i = 0; texto[i] != '\0'; i++) {
        letra = tolower(texto[i]);  
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            qtdVogais++;
        }
    }

    printf("\nTotal de vogais: %d\n", qtdVogais);

    return 0;
}
