// Verifica se uma string é um palíndromo
#include <stdio.h>
#include <string.h>

int main(void) {
    char string[30];
    int palindromo = 1, end, i, j;
    printf("Digite uma palavra para verificar se é um palíndromo: ");
    scanf("%s", string);
    end = strlen(string)-1;
    for (i=end; i!=0; i--) {
        j = (end - i);
        if (string[i] != string[j]) {
            palindromo = 0;
            break;
        }
    }
    if (palindromo) {
        printf("%s é um palíndromo\n", string);
    } else {
        printf("%s não é um palíndromo\n", string);
    }
    return 0;
}
