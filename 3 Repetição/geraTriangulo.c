// Gera um triângulo de asteriscos
#include <stdio.h>

int main(void) {
	int i, j;
	printf("Quantidade de linhas no triângulo: ");
	scanf("%d", &i);
	for (i; i>0; i--) {
		for (j=i; j>0; j--) {
			printf("*");
		}
		printf("\n");
	};
	return 0;
}
