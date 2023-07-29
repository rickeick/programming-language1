#include <stdio.h>
#include <malloc.h>

void addTelefone(int *agenda, int numero, int *pos) {
    agenda[*pos] = numero;
    *pos += 1;
}

int main(void) {
    int n, k, numero, opcao, count=0;
    int *pos = &count, *agenda;
    printf("Limite de números na agenda: ");
    scanf("%d", &n);
    agenda = (int *)malloc(sizeof(int)*n);
    if (agenda != NULL) {
        do {
            printf("[1] Adicionar Número\n");
            printf("[2] Listar Números\n");
            printf("[3] Aumentar Limite\n");
            printf("[4] Sair do Sistema\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
            if (opcao == 1) {
                if (count < n) {
                    printf("Número para adicionar: ");
                    scanf("%d", &numero);
                    addTelefone(agenda, numero, pos);
                    printf("Número Adicionado!\n");
                } else {
                    printf("Limite da agenda alcançado!\n");
                }
            }
            else if (opcao == 2) {
                printf("Números adicionados:\n");
                for (int i=0; i<count; i++) {
                    printf("%d\n", agenda[i]);
                }
            }
            else if (opcao == 3) {
                printf("Aumentar o limite em mais: ");
                scanf("%d", &k);
                n += k;
                agenda = realloc(agenda, sizeof(int)*(n));
                if (agenda != NULL) {
                    printf("Limite aumentado com sucesso!\n");
                } else {
                    printf("Não foi possível aumentar o limite!\n");
                }
            }
            else if (opcao == 4) {
                free(agenda);
                printf("Sistema Encerrado!\n");
            }
            else {
                printf("Opção Inválida!\n");
            }
            printf("\n");
        } while (opcao != 4);
    }
}
