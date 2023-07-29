// Gera a transposta de uma matriz 5x5 aleatória
#include <stdio.h>

int main(void) {
    srand(time(NULL));
	int matriz[5][5], transposta[5][5];
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
			matriz[i][j] = rand()%10;
			transposta[j][i] = matriz[i][j];
		}
	}
	printf("Matriz Aleatoria:\n");
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
            printf("%d ", matriz[i][j]);
        }
		printf("\n");
	}
	printf("Matriz Transposta:\n");
	for (int i=0; i<5; i++) {
		for (int j=0; j<5; j++) {
            printf("%d ", transposta[i][j]);
        }
		printf("\n");
	}
	return 0;
}
