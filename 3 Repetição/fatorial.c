// Calcula fatorial
#include <stdio.h>

int main(void) {
	int i; unsigned int fat=1;
	printf("Digite um número: ");
	scanf("%d", &i);
	for (int j=i; j!=0; j--) {
		fat *= j;
	}
	printf("%d! = %d\n", i, fat);
	return 0;
}
