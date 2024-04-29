#include <stdio.h>
#include <stdlib.h>

struct celula{
    int conteudox,conteudoy;
    struct celula *prox;
};

typedef struct celula cel;

cel *Cria(){
    cel *head;

    head = (cel*)malloc(sizeof(cel));
    head->prox = NULL;
    return head;
}

void insereFim(cel* head, int x, int y){
    cel *nova = head, *criado;

    while(nova->prox != NULL){
        nova = nova->prox;
    }
        if(nova->prox == NULL){
            criado = (cel*) malloc(sizeof(cel));
            criado->prox = NULL;
            criado->conteudox = x;
            criado->conteudoy = y;
            nova->prox = criado;
        }
}

int main(){
    int x=0, y=0;
    cel *q1, *q2, *q3, *q4, *temp;

    q1 = Cria();
    q2 = Cria();
    q3 = Cria();
    q4 = Cria();



    FILE *fp = fopen("entrada.txt", "r");
    if(fp == NULL){
        printf("problema1\n");
        return 1;
    }
    while((fscanf(fp, "%d %d", &x, &y)) == 2){
        if(x > 0){
            if(y > 0){      //quadrante 1
            
            insereFim(q1, x, y);
            }

            if(y < 0){      //quadrante 4
            insereFim(q4, x, y);
            }
        }
        if(x < 0){
            if(y > 0){      //quadrante 2
            insereFim(q2, x, y);
            }
            if(y < 0){      //quadrante 3
            insereFim(q3, x, y);
            }
        }
    }
    fclose(fp);

    fp = fopen("saida.txt", "w+");
    if (fp == NULL){
        printf("problema2\n");
    }


    temp = q1->prox;
    printf("Q1\n");
    while(temp != NULL){
        printf("%d, %d\n", temp->conteudox, temp->conteudoy);
        fprintf(fp, "%d %d\n", temp->conteudox, temp->conteudoy);
        temp = temp->prox;
    }

    temp = q2->prox;
    printf("q2\n");
    while(temp != NULL){
        printf("%d, %d\n", temp->conteudox, temp->conteudoy);
        fprintf(fp, "%d %d\n", temp->conteudox, temp->conteudoy);
        temp = temp->prox;
    }

    temp = q3->prox;
    printf("q3\n");
    while(temp != NULL){
        printf("%d, %d\n", temp->conteudox, temp->conteudoy);
        fprintf(fp, "%d %d\n", temp->conteudox, temp->conteudoy);
        temp = temp->prox;
    }

    temp = q4->prox;
    printf("q4\n");
    while(temp != NULL){
        printf("%d, %d\n", temp->conteudox, temp->conteudoy);
        fprintf(fp, "%d %d\n", temp->conteudox, temp->conteudoy);
        temp = temp->prox;
    }
    return 0;
}