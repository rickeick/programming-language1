// PROVA1: Escolhendo uma rota para um entregador de pizza
#include <stdio.h>

// Função recursiva para mostrar a rota
int print_recursivo(int casas, int *rota) {
    if (casas == 0) {
        return 0;
    }
    printf("%d -> ", rota[casas-1]);
    print_recursivo(casas-1, rota);
}

int main(void) {
    // Variáveis
    register int i, j;
    int indice, menor, MAX = 32767;
    int custo=0, linha[] = {0,0,0,0,0};
    int rota[5], mapa[][5] = {
        {0, 5, 12, 3, 11},
        {5, 0, 12, 20, 6},
        {12, 12, 0, 17, 12},
        {3, 20, 17, 0, 20},
        {11, 6, 12, 20, 0}
    };
    // Soma dos valores de cada linha da matriz mapa
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            linha[i] += mapa[i][j];
        }
    }
    // Ordenação decrescente do vetor linha para criação do vetor rota
    indice = 0;
    menor = linha[0];
    for (i=0; i<5; i++) {
        for (j=1; j<5; j++) {
            if (linha[j] < menor) {
                indice = j;
                menor = linha[j];
            }
        }
        rota[i] = indice+1;
        linha[indice] = MAX;
        menor = linha[0];
        indice = 0;
    }
    // Cálculo do custo da rota
    for (i=0; i<4; i++) {
        custo += mapa[rota[i]-1][rota[i+1]-1];
    }
    // Mostrar o vetor rota e o seu custo
    printf("ROTA: ");
    print_recursivo(5, rota);
    printf("\nCUSTO DA ROTA: %d\n", custo);
    return 0;
}
