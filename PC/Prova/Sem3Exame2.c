#include <stdio.h>
#include <stdlib.h>


typedef struct cel {
char conteudo;
struct cel *prox;
} celula;


celula *cria(void);
char remove_fim(celula * c);
int lista_vazia(celula * c);
void grava_arquivo(celula * c, char * arq);
void insere_inicio(celula * c , char x);
void insere_ordem_crescente(celula * c, char x);
void le_arquivo(celula * c, char * arq);



int main() {
celula *listaA, *listaB;
char removido;

listaA = cria();
listaB = cria();

le_arquivo(listaA, "entrada.txt");
grava_arquivo(listaA, "listaA.txt");

while (!lista_vazia(listaA)) {
 removido = remove_fim(listaA);
 insere_inicio(listaB, removido);
}
grava_arquivo(listaB, "listaB.txt");
return 0;
}



celula *cria(void){
    celula *nova;
    nova = (celula*)malloc(sizeof(celula));
    nova->prox = NULL;
    return nova;
}
void insere_ordem_crescente(celula * c, char x){
    celula *nova, *antecessor = c, *atual = c->prox;

    nova = (celula*)malloc(sizeof(celula));
    nova->conteudo = x;

    while(atual != NULL && x > atual->conteudo){

        antecessor = atual;
        atual = atual->prox;
    }
    nova->prox = atual;
    antecessor->prox = nova;
}
void le_arquivo(celula * c, char * arq){
    FILE *fp;
    char car;

    fp = fopen(arq, "r");
    if(fp == NULL){
        printf("problema2\n");
    }
    while((car = fgetc(fp)) != EOF){
        insere_ordem_crescente(c, car);
    }

    fclose(fp);
}
void grava_arquivo(celula * c, char * arq){
    FILE *fp;
    celula *temp = c->prox;

    fp = fopen(arq, "w+");
    if(fp == NULL){
        printf("\nproblema3\n");
    }

    while(temp != NULL){
        fprintf(fp, "%c", temp->conteudo);
        temp = temp->prox;
    }
    fclose(fp);
}
void insere_inicio(celula * c, char x){
    celula *nova;

    nova = (celula*)malloc(sizeof(celula));
    nova->conteudo = x;
    
    nova->prox = c->prox;
    c->prox = nova;
}
char remove_fim(celula * c){    
    char apagado;
    celula *anterior = c;
    celula *atual = c->prox;

    while (atual->prox != NULL) {
        anterior = atual;
        atual = atual->prox;
    }

    apagado = atual->conteudo;
    free(atual);
    anterior->prox = NULL;
    return apagado;

}
int lista_vazia(celula * c){
    celula *temp = c->prox;

    if(temp == NULL){
        return 1; 
    }else{
        return 0;
    }
    
}