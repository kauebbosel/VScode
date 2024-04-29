#include <stdio.h>
int main(){
    FILE *fp;
    char str[30];
    char car;
    int contaLinha=1;

    //fgets(str,sizeof(str),stdin);
    scanf("%s",str);

    fp = fopen(str, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while((car = fgetc(fp)) != EOF){
        if(car == '\n'){
            contaLinha++;
        }
    }

    printf("%d",contaLinha);





}