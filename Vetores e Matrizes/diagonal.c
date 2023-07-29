// Multiplica todos os elementos da diagonal principal de uma matriz 5x5 aleatória
#include <stdio.h>

int main(void) {
    srand(time(NULL));
	int diagonal=1, matriz[5][5];
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
            matriz[i][j] = rand()%10;
        }
		diagonal *= matriz[i][i];
	}
	printf("Matriz Aleatória:\n");
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
            printf("%d ", matriz[i][j]);
        }
		printf("\n");
	}
	printf("Produtório do elementos da diagonal principal: ");
	printf("%d\n", diagonal);
	return 0;
}
