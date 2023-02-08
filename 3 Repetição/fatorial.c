// Cálcular fatorial
#include <stdio.h>

int main(void) {
	int i; double fat=1;
	printf("Digite um número: ");
    scanf("%d", &i);
	for (i; i!=0; i--) {
        fat *= i;
    }
	printf("%d! = %d", i, fat);
	return 0;
}
