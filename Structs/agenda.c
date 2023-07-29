// Agenda de Pessoas com nome e telefone
#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct _pessoa_ {
    int telefone;
    char nome[100];
} Pessoa;

void addPessoa(Pessoa *agenda, Pessoa pessoa, int indice) {
    agenda[indice] = pessoa;
}

int buscarPessoa(Pessoa *agenda, int len, char *nome) {
    for (int i=0; i<len; i++) {
        if (!strcmp(agenda[i].nome, nome)) {
            return agenda[i].telefone;
        }
    }
    return -1;
}

int main(void) {
    int telefone;
    char nome[100];
    Pessoa pessoa;
    Pessoa agenda[3];
    for (int i=0; i<3; i++) {
        printf("Nome: ");
        fgets(nome, 100, stdin);
        printf("Telefone: ");
        scanf("%d", &telefone);
        getchar();
        strcpy(pessoa.nome, nome);
        pessoa.telefone = telefone;
        addPessoa(agenda, pessoa, i);
        printf("\n");
    }
    printf("Nome para buscar na agenda: ");
    fgets(nome, 100, stdin);
    int len = sizeof(agenda)/sizeof(Pessoa);
    telefone = buscarPessoa(agenda, len, nome);
    printf("%d\n", telefone);
}
