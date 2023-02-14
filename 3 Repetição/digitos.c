// Informa a quantidade de digitos de um número
#include <stdio.h>

int main(void) {
	int n, cont=0;
	printf("Digite um número: ");
	scanf("%d", &n);
	while (n != 0) {
		cont++;
		n /= 10;
	};
	printf("O número tem %d digitos\n", cont);
	return 0;
}
