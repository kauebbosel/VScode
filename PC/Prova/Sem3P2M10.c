#include <stdio.h>

struct celula{
    int conteudo;
    struct celula *prox;
};

typedef struct celula cel;


cel *cria(void);

cel insereInicio(cel* cabeca, int x);

cel arrumaOrdem(cel* cabeca);


int main(){
    cel *listas[10];
    FILE *fp;
    int valor[100];
    int j=0;


    for(int i=0; i < 10; i++){
        listas[i] = cria();
    }

    fp = fopen("arq_m10.txt", "r");
    
    while(fscanf(fp, "%d",valor[j]) == 1){
        j++;
    }

    //4 2 1 3
    //2 4 1 3
    //1 2 4 3
    //1 2 3 4
    //9 4 8 2 6 7 3 1 5
    //4 9 8 2 6 7 3 1 5
    //4 8 9 2..
    //2 4 8 9 6...
    //2 4 6 8 9 7...
    //2 4 6 7 8 9..
    //2 3 4 6 7 8 9...
    //1 2 3 4 6 7 8 9...
    //1 2 3 4 5 6 7 8 9...

    

}

cel *cria(void){

    cel *nova;

    nova = (cel*)malloc(sizeof(cel));
    nova->conteudo = NULL;
    return nova; 
}

cel insereInicio(cel* cabeca, int x){
    cel *novo;

    novo = (cel *)malloc(sizeof(cel));

    novo->prox = cabeca->prox;
    novo->conteudo = x;
    cabeca->prox = novo;

}

cel arrumaOrdem(cel* cabeca){
    cel *atual, *proximo;

    for(atual = cabeca; atual != NULL; atual = atual->prox){
        for(proximo = cabeca; proximo != NULL; proximo = proximo->prox){
            if(atual->conteudo < proximo->conteudo){
                atual->prox = proximo;
                proximo = proximo->prox;

                break;
            }
        }
    }
}