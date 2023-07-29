// Rotaciona um vetor à esquerda em n posições
#include <stdio.h>

int main(void) {
	int n, aux, vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Em quantas posições deseja rotacionar: ");
	scanf("%d", &n);
    for (int i=0; i<n; i++) {
		aux = vetor[0];
		for (int j=0; j<10; j++) {
            vetor[j] = vetor[j+1];
        }
		vetor[9] = aux;
	}
	printf("Vetor Rotacionado:\n");
	for (int i=0; i<10; i++) {
        printf("%d ", vetor[i]);
    }
	return 0;
}
