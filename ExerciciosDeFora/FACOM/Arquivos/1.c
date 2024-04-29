#include <stdio.h>
int main(){
    FILE *fp;
    char car;

    fp = fopen("arq.txt", "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite os caracteres (Digite '0' para parar):\n");
    while(1){
        scanf(" %c",&car);
        if(car == '0'){
            break;
        }
        fputc(car, fp);
    }
    fclose(fp);

    fopen("arq.txt", "r");
     if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while((car = fgetc(fp)) != EOF){
        printf("%c",car);
    }
    
    fclose(fp);
    
    return 0;

}