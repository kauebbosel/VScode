#include <stdio.h>
#include <stdlib.h>

struct cel{
    int conteudo;
    struct cel *prox;
};

typedef struct cel celula;

int main(){
    celula *inicio;

    inicio = (celula *)malloc(sizeof(celula));
    inicio-> prox = NULL;
    

}