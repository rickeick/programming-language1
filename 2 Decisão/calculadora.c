// Calculadora básica
#include <stdio.h>

int main(void) {
	int x, y;
	char oper;
	printf("Digite um cálculo básico: ");
	scanf("%d %c %d", &x, &oper, &y);
	switch (oper) {
		case '+': printf("%d + %d = %d", x, y, x+y); break;
		case '-': printf("%d - %d = %d", x, y, x-y); break;
		case '*': printf("%d * %d = %d", x, y, x*y); break;
		case '/': printf("%d / %d = %d", x, y, x/y); break;
		default: printf("Não foi possível fazer a operação!");
	}
	return 0;
}
