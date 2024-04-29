#include <stdio.h>
#include <stdlib.h>

struct cel{
    char conteudo;
    struct cel *prox;
};

typedef struct cel celula;

int eh_vogal(char x);
void le_arquivo(celula * c, char * arq);
void insere_fim(celula * c, char x);
celula *cria(void);
int lista_vazia(celula *c);
char remove_inicio(celula * c);
void imprime(celula *c);
void grava_arquivo(celula *c, char *arq);

int main(){
    /*celula *listaEntrada, *listaVogais, *listaOutros;
    char arq[100],removido;
    celula* bazinga;
    FILE *fp;
    int menu=0;
    int i=0;

    while (menu!=4){
        printf("menu\n");
        scanf("%d",&menu);
        if(menu == 1){
            insere_fim(bazinga, removido);
        }
        if(menu == 2){
            bazinga = cria();
        }
        if(menu == 3){
            remove_inicio(bazinga);
        }
        if(menu == 5){
            printf("arquivo\n");
            getchar();
            fgets(arq, sizeof(arq), stdin);
    
            le_arquivo(bazinga, arq);
        }
        if(menu == 6){
            imprime(bazinga);
        }
    }*/
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

void le_arquivo(celula * c, char *arq){
    FILE *fp;
    char str[100];
    celula *copia = c, *frente;
    int i=0;

    for(int i=0; arq[i] != '\0'; i++){
        if(arq[i] == '\n'){
            arq[i] = '\0';
            break;
        }
    }

    fp = fopen(arq, "r");
    if(fp == NULL){
        printf("treta\n");
    }

    fgets(str , sizeof(str) , fp);

    while(copia != NULL){
        printf("teste",copia->conteudo);
        copia = copia->prox;
    }
    if(copia == NULL){
        printf("%s",str);
    }

    fclose(fp);
}

void imprime(celula *c){
    celula *copia = c;
    
    while(copia != NULL){
        printf("%c\n",copia->conteudo);
        copia = copia->prox;
    }
}/*
void le_arquivo(celula *c, char *arq) {
    FILE *fp;
    char caractere;

    // Abre o arquivo para leitura
    fp = fopen(arq, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // Percorre até o último nó da lista encadeada
    celula *ultimo = c;
    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    // Lê cada caractere do arquivo e insere no final da lista encadeada
    while ((caractere = fgetc(fp)) != EOF) {
        celula *nova = (celula *)malloc(sizeof(celula));
        if (nova == NULL) {
            printf("Erro ao alocar memória.\n");
            fclose(fp);
            return;
        }
        nova->conteudo = caractere;
        nova->prox = NULL;
        ultimo->prox = nova;
        ultimo = nova;
    }

    // Fecha o arquivo após a leitura
    fclose(fp);
}
*/
void insere_fim(celula * c, char x){
    celula* p = c, *nova;

    while(p->prox != NULL){
        p = p->prox;
    }

    nova = (celula*)malloc(sizeof(celula));
    nova->prox = p;
    nova->conteudo = x;
    
    printf("%c\n",nova->conteudo);
}

celula *cria(void){
    celula *p;

    p = (celula*)malloc(sizeof(celula));
    p->prox == NULL;
    return p;
}
int lista_vazia(celula * c){
    celula *temp = c;
    temp = temp->prox;
    if(temp->conteudo == '\0'){
        return 1;
    }
    return 0;
}

char remove_inicio(celula * c){
    char caractere;
    celula *copiap;

    copiap = c;

    copiap = copiap->prox;
    caractere = copiap->conteudo;

    c->prox = copiap->prox;

    free(copiap);
    return caractere;
}

void grava_arquivo(celula *c,char *arq){
    celula *p = c;
    FILE *fp;
    char str[100];
    int i=0;
    
    fp = fopen(arq, "w+");
    if(fp == NULL){
        printf("erro\n");
    }
    while(p != NULL){
        str[i] = p->conteudo;
        p = p->prox;
        i++;
    }

    fclose(fp);
}