// Mescla os arquivos file1.txt e file2.txt em mesclado.txt
#include <stdio.h>

int main(void) {
    char str1[10], str2[10];
    FILE *file1, *file2, *mesclado;
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    mesclado = fopen("mesclado.txt", "w+");
    if (file1 != NULL && file2 != NULL && mesclado != NULL) {
        while(fgets(str1, 10, file1) != NULL){
            fprintf(mesclado, "%s", str1);
        }
        while(fgets(str2, 10, file2) != NULL){
            fprintf(mesclado, "%s", str2);
        }
        fclose(file1);
        fclose(file2);
        fclose(mesclado);
        printf("Arquivos mesclados com sucesso!\n");
    } else {
        printf("Não foi possível mesclar os arquivos!\n");
    }
    return 0;
}
