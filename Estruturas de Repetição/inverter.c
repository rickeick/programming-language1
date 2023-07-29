// Gera o número invertido
#include <stdio.h>

int main(void) {
	int n, dig;
	printf("Digite um número: ");
	scanf("%d", &n);
	printf("Número invertido: ");
	while (n != 0) {
		dig = n % 10;
		printf("%d", dig);
		n /= 10;
	};
	printf("\n");
	return 0;
}
