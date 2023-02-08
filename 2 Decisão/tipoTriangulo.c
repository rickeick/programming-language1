// Informa o tipo do triângulo com lados A,B,C
#include <stdio.h>

int main(void) {
	float A, B, C;
	printf("Digite os valores dos lados para analisar: ");
	scanf("%f %f %f", &A, &B, &C);
	if (A<(B+C) && B<(A+C) && C<(A+B)) {
		printf("Esse valores de lados formam um triângulo ");
		if (A==B && B==C) {
            printf("equiátero.\n");
        }
		else if (A==B || B==C || C==B) {
            printf("isóceles.\n");
        }
		else {
            printf("escaleno.\n");
        }
	} else {
        printf("Esses valores de lados não formam um triângulo.\n");
    }
	return 0;
}
