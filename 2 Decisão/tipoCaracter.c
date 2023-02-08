// Informa o tipo do caracter digitado
#include <stdio.h>

int main(void) {
	char c;
	printf("Digite um caracter: ");
    scanf("%c", &c);
	if ((c>=65 && c<=90) || (c>=97 && c<=122)) {
        printf("Letra");
    } else if (c>=48 && c<=57) {
        printf("Digito");
    } else {
        printf("Especial");
    }
    return 0;
}
