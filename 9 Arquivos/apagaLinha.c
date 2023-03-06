// Apaga uma linha escolhida pelo usuário do arquivo teste.txt
#include <stdio.h>

int main(void) {
    int linha;
    FILE *arq, *temp;
    char str[100], palavra[100];
    arq = fopen("teste.txt", "r");
    temp = fopen("temp.txt", "w+");
    if (arq == NULL || temp == NULL) {
        printf("Nao foi possivel abrir aquivos!\n");
        return -1;
    }
    printf("Qual linha vc deseja apagar: ");
    scanf("%d", &linha);
    int atual = 0;
    while (fgets(str, 100, arq) != NULL){
        if (atual != linha-1) {
            fprintf(temp, "%s", str);
        } else {
            fprintf(temp, "");
        }
        atual++;
    }
    remove("teste.txt");
    rename("temp.txt", "teste.txt");
    printf("Linha apagada com sucesso!\n");
    fclose(temp);
    fclose(arq);
    return 0;
}
