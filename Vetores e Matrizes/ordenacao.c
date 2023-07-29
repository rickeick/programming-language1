// Ordenação crescente de um vetor usando o método BubbleSort
#include <stdio.h>

void bubbleSort(int vetor[]) {
    int aux, tam = sizeof(vetor)/sizeof(int);
    for(int i=0; i<tam; i++) {
        for(int j=1; j<tam; j++) {
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}
