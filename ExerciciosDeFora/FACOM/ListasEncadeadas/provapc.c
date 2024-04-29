#include <stdio.h>
#include <stdlib.h>

struct cel {
    int conteudox,conteudoy;
    struct cel* prox;
};

typedef struct cel celula;


int main(){
    int x=0,y=0;
    FILE *fp;
    char nomeArquivo[100],car;
    celula *q1, *q2, *q3, *q4, *p, *iniQ1, *iniQ2, *iniQ3, *iniQ4;

    iniQ1 = (celula *)malloc(sizeof(celula));
    iniQ1->prox = NULL;

    iniQ2 = (celula *)malloc(sizeof(celula));
    iniQ2->prox = NULL;

    iniQ3 = (celula *)malloc(sizeof(celula));
    iniQ3->prox = NULL;

    iniQ4 = (celula *)malloc(sizeof(celula));
    iniQ4->prox = NULL;

    printf("Digite o nome do arquivo\n");
    scanf("%s",nomeArquivo);

    fp = fopen(nomeArquivo, "r");
    if(fp == NULL){
        printf("deu treta");
        return 1;
    }

    while((fscanf(fp, "%d %d", &x,&y)) != EOF){
        if(x > 0){
            if(y > 0){ //1
                q1 = (celula *)malloc(sizeof(celula));
                q1->conteudox = x;
                q1->conteudoy = y;
                q1->prox = iniQ1->prox;
                iniQ1->prox = q1;
                }
            if(y < 0){ //4
                q4 = (celula *)malloc(sizeof(celula));
                q4->conteudox = x;
                q4->conteudoy = y;
                q4->prox = iniQ4->prox;
                iniQ4->prox = q4;
                }
            }
        if(x < 0){
            if(y > 0){ //2
                q2 = (celula *)malloc(sizeof(celula));
                q2->conteudox = x;
                q2->conteudoy = y;
                q2->prox = iniQ2->prox;
                iniQ2->prox = q2;
                }
            if(y < 0){ //3
                q3 = (celula *)malloc(sizeof(celula));
                q3->conteudox = x;
                q3->conteudoy = y;
                q3->prox = iniQ3->prox;
                iniQ3->prox = q3;
                }
        }  
    }
    printf("Quadrante 1\n");
    for(int i=0; q1 != NULL;q1 = q1->prox){
        printf("%d, %d\n",q1->conteudox,q1->conteudoy);
    }
    printf("Quadrante 2\n");
    for(int i=0; q2 != NULL;q2 = q2->prox){
        printf("%d, %d\n",q2->conteudox,q2->conteudoy);
    }
    printf("Quadrante 3\n");
    for(int i=0; q3 != NULL;q3 = q3->prox){
        printf("%d, %d\n",q3->conteudox,q3->conteudoy);
    }
    printf("Quadrante 4\n");
    for(int i=0; q4 != NULL;q4 = q4->prox){
        printf("%d, %d\n",q4->conteudox,q4->conteudoy);
    }

    free(q1);
    free(q2);
    free(q3);
    free(q4);
    fclose(fp);
    return 0;
}