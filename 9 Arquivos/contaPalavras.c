// Conta o número de palavras e caracteres no arquivo.txt
#include <stdio.h>

int main(void) {
    char c;
    FILE *arq;
    int caracteres = 0, palavras = 0;
    arq = fopen("arquivo.txt" , "r");
    if (arq == NULL) {
        printf("Erro de abertura!");
        return -1;
    }
    c = fgetc(arq);
    while (c != EOF) {
        if (c != '\n') {
            caracteres++;
        }
        if (c == ' ' || c == '\n') {
            palavras++;
        }
        c = fgetc(arq);
    }
    printf("Caracteres: %d\n", caracteres);
    printf("Palavras: %d\n", palavras+1);
    fclose(arq);
    return 0;
}
