// Gera 10 números aleatórios entre 1 a 6
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void numerosAleatorios() {
	int n;
	srand(time(NULL));
	for (int i=0; i<=10; i++) {
		n = 1 + (rand() % 6);
		printf("%d\n", n);
	}
}

int main(void) {
	numerosAleatorios();
}
