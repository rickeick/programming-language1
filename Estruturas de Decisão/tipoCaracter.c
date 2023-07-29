// Informa o tipo do caracter digitado
#include <stdio.h>

int main(void) {
	char c;
	printf("Digite um caracter: ");
	scanf("%c", &c);
	if ((c>=65 && c<=90) || (c>=97 && c<=122)) {
		printf("O caracter é uma letra.\n");
	} else if (c>=48 && c<=57) {
		printf("O caracter é um digito.\n");
	} else {
		printf("O caracter é especial.\n");
	}
	return 0;
}
