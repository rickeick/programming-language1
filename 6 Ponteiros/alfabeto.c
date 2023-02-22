// Mostra na tela todas as letras do alfabeto utilizando ponteiros
#include <stdio.h>

int main(void) {
    char *alfabeto = "abcdefghijklmnopqrstuvwxyz";
    for (int i=0; i<26; i++) {
        printf("%c ", *alfabeto);
        alfabeto++;
    }
    printf("\n");
}
