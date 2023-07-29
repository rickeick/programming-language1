// Calcula o reajuste salarial dos funcionários
#include <stdio.h>

float reajuste(float salario, float x) {
	if (salario < 900) {
		salario += salario * 1.5 * (x/100);
	} else {
		salario += salario * (x/100);
	}
	return salario;
}

int main(void) {
	int salario, percentual, novo;
	printf("Salário do Funcionário: ");
	scanf("%d", &salario);
	printf("Percentual de Reajuste: ");
	scanf("%d", &percentual);
	novo = reajuste(salario, percentual);
	printf("Novo salário: %d\n", novo);
}
