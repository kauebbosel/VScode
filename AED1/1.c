#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct celula {
    char conteudo;
    struct celula *prox;
}cel;

int main(){
    int menu=0, tamanhoNome=0, *pt;
    char str[200];


    do{
        printf("1.adiciona nome, 2.remove nome, 3.lista, 4.sair\n");
        scanf("%d",&menu);

        if(menu == 1){
            printf("digite o nome (com caractere '_' para separar)\n");
            getchar();
            fgets(str, sizeof(str), stdin);
            *pt = strlen(str);
            printf("%d", *pt);

            /*FILE *fp = fopen("arquivo.txt", "w+");
            if(fp == NULL){
                printf("problema 1\n");
                return 1;
            }*/
        }
    } while(menu != 4);
}