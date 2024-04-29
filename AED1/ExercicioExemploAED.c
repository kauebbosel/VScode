/*Armazene todos os nomes na mesma string, não pode ter desperdício de memória, faça menu: 1.add nome
2.remove nome, 3.lista, 4.sai*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct celula{
    char conteudo;
    struct celula *prox;
};
typedef struct celula cel;

cel *cria();
void insereComeco (cel *head, char conteudo);

int main(){
    int menu=0;
    char stringtemp[100];
    cel *head = cria();
    
    do{
        printf("1. Botar nome, 2.Remover nome, 3.Listar, 4.Sair\n");
        scanf("%d",&menu);

        
        if(menu == 1){
            printf("Formato:Nome Sobrenome_\n");
            fgets(stringtemp, 100, stdin);
            for(int i = 0; i < strlen(stringtemp); i++){
                insereComeco(head, stringtemp[i]);
            }
        }
        if(menu == 2){

        }
        if(menu == 3){
            for(cel *copiahead = head; copiahead = copiahead->prox; copiahead->prox != NULL){
                printf("%c",head);
            }
        }
        if(menu == 4){
            free(head);
            printf("Saindo\n");
        }

    }while(menu !=4);
}

cel *cria(){
    cel *nova;
    nova = (cel*)malloc(sizeof(cel));
    nova->prox = NULL;
    return nova;
}

void insereComeco (cel *head, char conteudo){
    cel *nova;

    nova = (cel*)malloc(sizeof(cel));
    nova->conteudo = conteudo;
    nova->prox = head->prox;
    head->prox = nova;
}