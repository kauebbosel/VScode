/*Armazene todos os nomes e sobrenomes na mesma string, não pode ter desperdício de memória, faça menu: 1.add nome
2.remove nome, 3.lista, 4.sai*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pessoa{          //lista encadeada simples
    char *nome;
    struct pessoa *pNext;
}pessoa;

pessoa adicionarPessoa(pessoa *head);
pessoa removerPessoa(pessoa *head);
pessoa listarTodos(pessoa *head); 

int main(){
    int menu = 0;
    pessoa *head = malloc(sizeof(pessoa));     //aloca 10 pessoas diferentes
    if(head == NULL){
        printf("erro ao alocar memoria\n");
        return 1;
    }
    head->pNext = NULL;

    switch (menu)
    {
        case 1:
        adicionarPessoa(head);
            break;
        case 2:
        removerPessoa(head);
        break;
        
        case 3:
        listarTodos(head);
        break;

        case 4:
        printf("Saindo");
        return 0;

        default:
        printf("valor inválido\n");
            break;
    }
}

pessoa adicionarPessoa(pessoa *head){
    int len = 0;
    char cTemp[100];
    pessoa *new = malloc(sizeof(pessoa));
    if(new == NULL){
        printf("Erro ao alocar memoria\n");
        exit(1);
    }
    head->pNext = new;
    new->pNext = NULL;

    printf("digite nome: ");
    fgets(cTemp, 100, stdin);
    len = strlen(cTemp);                        //a ideia era fazer um array temporário e dps fazer um permanente com 0 desperdicio de memoria
    pessoa *aux = malloc(sizeof(char) * len);
    *new->pNext = aux;
    printf("%s",new->nome);

    return *new;
}