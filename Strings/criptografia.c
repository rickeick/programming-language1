// Criptografia de strings utilizando o código de César
#include <stdio.h>
#include <string.h>

int incremento(int var, int inc, int max) {
    if (var+inc >= max) {
        return var+inc-max;
    } else {
        return var+inc;
    }
}

int main(void) {
    int i, j, k, len;
    char string[100];
    char codigo[27], opcao;
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
    printf("Criptografar/Descriptografar? [C/D]: ");
    scanf("%c", &opcao);
    getchar();
    printf("String: ");
    fgets(string, 100, stdin);
    len = strlen(string)-1;
    printf("Chave: ");
    scanf("%d", &k);
    for (i=0; i<26; i++) {
        j = incremento(i, k, 26);
        codigo[i] = alfabeto[j];
    }
    if (opcao == 'C') {
        for (i=0; i<len; i++) {
            if (string[i] == ' ') {
                printf(" ");
            } else {
                for (j=0; j<26; j++) {
                    if (string[i] == alfabeto[j]) {
                        printf("%c", codigo[j]);
                        break;
                    }
                }
            }
        }
        printf("\n");
    } else if (opcao == 'D') {
        for (i=0; i<len; i++) {
            if (string[i] == ' ') {
                printf(" ");
            } else {
                for (j=0; j<26; j++) {
                    if (string[i] == codigo[j]) {
                        printf("%c", alfabeto[j]);
                        break;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
