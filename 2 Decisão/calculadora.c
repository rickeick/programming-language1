// Calculadora básica
#include <stdio.h>

int main(void) {
	int x, y;
	char oper;
	printf("Faça um cálculo básico: ");
	scanf("%d %c %d", &x, &oper, &y);
	switch (oper) {
		case '+': printf("%d + %d = %d\n", x, y, x+y); break;
		case '-': printf("%d - %d = %d\n", x, y, x-y); break;
		case '*': printf("%d * %d = %d\n", x, y, x*y); break;
		case '/': printf("%d / %d = %d\n", x, y, x/y); break;
		default: printf("Não foi possível fazer a operação!\n");
	}
	return 0;
}
