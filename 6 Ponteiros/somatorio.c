// Soma todos os elementos do vetor usando um ponteiro
#include <stdio.h>

int main(void) {
	int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum=0, *ptr=NULL;
    ptr = vetor;
	for (int i=0; i<10; i++) {
        sum += *ptr;
        ptr++;
    }
	printf("%d", sum);
	return 0;
}
