#include <stdio.h>
#include <stdlib.h>
typedef struct cel {
char conteudo;
struct cel *prox;
} celula;

int eh_vogal(char x);
int lista_vazia(celula * c);
celula *cria(void);
void insere_fim(celula * c, char x);
char remove_inicio(celula * c);
void le_arquivo(celula * c, char *arquivo);
void grava_arquivo(celula * c, char *arquivo);

int main() {
    celula *listaEntrada, *listaVogais, *listaOutros;
    char removido;

    listaEntrada = cria();
    listaVogais = cria();
    listaOutros = cria();

    le_arquivo(listaEntrada, "entrada.txt");

    while (!lista_vazia(listaEntrada)) {
        removido = remove_inicio(listaEntrada);
        if (eh_vogal(removido)) {
        insere_fim(listaVogais, removido);
        } else {
        insere_fim(listaOutros, removido);
        }
    }
    grava_arquivo(listaVogais, "saidaVogais.txt");
    grava_arquivo(listaOutros, "saidaOutros.txt");

    return 0;
}

int eh_vogal(char x){
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o'|| x == 'u'){
        return 1;
    }else
    {
        return 0;
    }
}

celula *cria(void){
    celula *p;

    p = (celula*)malloc(sizeof(celula));
    p->prox == NULL;
    return p;
}

void le_arquivo(celula * c, char *arq){
    FILE *p;
    char str[100];
    celula *copia = c, *frente;

    p = fopen(arq, "r");
    if(p == NULL){
        printf("treta");
    }
    fgets(str , sizeof(str) ,p);
    printf("%s",str);

    while(copia!= NULL){
        printf("%d",copia->conteudo);
        copia->prox = c->prox;
    }

    fclose(p);
    free(copia);
}

void insere_fim(celula * c, char x){
    celula* p = c;

    do{
        p->prox = c->prox;
    } while(p->prox != NULL);

    if(p->prox == NULL){
        fputc(x, p->conteudo);
        printf("deu certo porra");
    }
}

void grava_arquivo(celula * c, char *arquivo){

}

int lista_vazia(celula * c){
    if(c->conteudo == NULL){
        return 1;
    }
    return 0;
}
