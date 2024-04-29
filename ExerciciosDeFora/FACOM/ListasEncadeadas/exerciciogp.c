/*Crie um programa em C para gerenciar uma lista de tarefas. O programa deve permitir ao usuário adicionar novas tarefas, exibir todas as tarefas existentes e marcar uma tarefa como concluída, removendo-a da lista.

Requisitos:
Implemente uma estrutura de dados para representar uma tarefa, contendo pelo menos os seguintes campos:

ID da tarefa (um número inteiro único para identificar cada tarefa)
Descrição da tarefa (uma cadeia de caracteres para descrever a tarefa)
Status da tarefa (um valor booleano indicando se a tarefa foi concluída ou não)
Implemente funções para realizar as seguintes operações:

Adicionar uma nova tarefa à lista.
Exibir todas as tarefas da lista, incluindo o ID, a descrição e o status de cada tarefa.
Marcar uma tarefa como concluída, removendo-a da lista.
Liberar a memória alocada para a lista de tarefas ao final do programa.*/

#include <stdio.h>
#include <stdlib.h>

struct cel{
    int conteudo, id,valorBooleano;
    char descricao[100];
    struct cel *prox;
};

typedef struct cel celula;

celula *criahead (void);
void insere(int x, celula *pointer);
void imprime(celula* pointer);


int main(){
    celula *p, *head;
    int menu,valor=0;

    while(menu!=5){
        scanf("%d",&menu);
        
        head = criahead();
        insere(10, head);
        imprime(head);
    }


    return 0;
}


celula *criahead(void){
    celula *p;

    p = (celula *)malloc(sizeof(celula));
    p->prox = NULL;
    return p;
}

void insere(int x, celula *pointer){
    celula *inserido;

    inserido = (celula *)malloc(sizeof(celula));
    inserido->conteudo = x;

    inserido->prox = pointer->prox;
    pointer->prox = inserido;
}

void imprime(celula *enderecohead){
    celula* copiahead;

    for(copiahead = enderecohead->prox; copiahead != NULL; copiahead = copiahead->prox){
        printf("%d\n",copiahead->conteudo);
    }
}   