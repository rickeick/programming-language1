// Conta a quantidade de ocorrências de um algarismo no número
#include <stdio.h>

int main(void) {
	int num, alg, dig, cont=0;
	printf("Digite um número e um algarismo: ");
	scanf("%d %d", &num, &alg);
	while (num != 0) {
		dig = num % 10;
		if (dig == alg) {
			cont++;
		}
		num /= 10;
	};
	printf("Quantidade de ocorrências do algarismo %d no número é %d\n", alg, cont);
	return 0;
}
