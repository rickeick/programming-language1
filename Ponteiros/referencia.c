// Funções com passagem de parâmetro por referência
#include <stdio.h>

void abs(int *x) {
	if (*x < 0) {
		*x = -*x;
	}
}

void troca(int *i, int *j) {
	int temp = *i;
	*i = *j;
	*j = temp;
}
