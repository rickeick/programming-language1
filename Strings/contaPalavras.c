// Conta quantas palavras tem uma string
#include <stdio.h>
#include <string.h>

int main(void) {
    char string[100];
    int count = 0, len, i;
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    len = strlen(string)-1;
    for (i=len; i!=0; i--) {
        if (string[i] == ' ') {
            count += 1;
        }
    }
    printf("A quantidade total de palavras é %d\n", count+1);
    return 0;
}
