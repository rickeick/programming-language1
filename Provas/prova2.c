// PROVA2: Escolhendo ações para investir na bolsa de valores
#include <stdio.h>
#include <malloc.h>
#define MIN -32767

typedef struct solucao {
    int *escolhidos;
    int lucro_total;
} Solucao;

int main(void) {
    // Declarações Iniciais
    FILE *entrada;
    register int i, j;
    int n, B, *custos, *lucros;
    // Leitura do Arquivo entrada.txt
    entrada = fopen("entrada.txt", "r");
    if (entrada == NULL) {
        printf("");
        return -1;
    }
    // Lendo n e B
    fscanf(entrada, "%d", &n);
    fscanf(entrada, "%d", &B);
    // Lendo os lucros
    lucros = malloc(sizeof(int)*n);
    if (lucros == NULL) {
        printf("");
        return -1;
    }
    for (j=0; j<n; j++) {
        fscanf(entrada,"%d", &lucros[j]);
    }
    // Lendo os custos
    custos = malloc(sizeof(int)*n);
    if (custos == NULL) {
        printf("");
        return -1;
    }
    for (j=0; j<n; j++) {
        fscanf(entrada,"%d", &custos[j]);
    }
    fclose(entrada);
    // Exibição dos dados do arquivo entrada.txt
    printf("Dinheiro Inicial Disponível [B]: %d\n", B);
    printf("Número de Ações Disponíveis [n]: %d\n\n", n);
    for (i=0; i<n; i++) {
        printf("Custo da Ação [%d]: %d\n", i, custos[i]);
        printf("Lucro da Ação [%d]: %d\n", i, lucros[i]);
        printf("\n");
    }
    // Obtenção dos lucros reais
    int lucros_reais[n];
    for (i=0; i<n; i++) {
        lucros_reais[i] = lucros[i] - custos[i];
    }
    // Ordenação de maneira crescente dos lucros reais
    // Ordenação dos custos em função dos lucros reais
    int lucros_ord[n], custos_ord[n];
    int maior=MIN, custo, indice, indices[n];
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (lucros_reais[j] > maior) {
                maior = lucros_reais[j];
                custo = custos[j];
                indice = j;
            }
        }
        indices[i] = indice;
        custos_ord[i] = custo;
        lucros_ord[i] = maior;
        maior = lucros_reais[indice] = MIN;
    }
    // Inicialização da estrutura solução
    Solucao s;
    s.lucro_total = 0;
    s.escolhidos = malloc(sizeof(int));
    // Escolha das ações
    int soma=0, cont=0;
    for (i=0; i<n; i++) {
        if (custos_ord[i]+soma <= B) {
            cont++;
            s.escolhidos = realloc(s.escolhidos,sizeof(int)*cont);
            s.escolhidos[i] = indices[i];
            soma += custos_ord[i];
        }
    }
    // Exibição dos Resultados
    printf("Ações Escolhidas: ");
    for (i=0; i<cont; i++) {
        printf("[%d] ", s.escolhidos[i]);
    }
    for (i=0; i<cont; i++) {
        s.lucro_total += lucros[s.escolhidos[i]];
    }
    printf("\n");
    printf("Lucro Total Obtido: %d\n", s.lucro_total);
    // Finalização
    free(s.escolhidos);
    free(custos);
    free(lucros);
    return 0;
}
