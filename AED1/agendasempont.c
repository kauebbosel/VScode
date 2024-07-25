#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM_NOME 50
#define TAM_EMAIL 50

typedef struct Pessoa{
    int idade;
    char nome[50];
    char email[50];
    struct Pessoa* next;
    struct Pessoa* prev;
} pessoa;

void adicionarPessoa();
void removerPessoa();
void buscarPessoa();
void listarTodos();

int main(){
    int menu;
    void *pBuffer;
    pessoa *head = (pessoa*) malloc( sizeof (pessoa) * 5);
    head->next = NULL;
    head->prev = NULL;
    if(head == NULL){
        printf("erro ao alocar memória\n");
        return 1;
    }
    do {
        printf("1 - Adicionar; 2 - Remover; 3 - Buscar; 4 - Listar; 5 - Sair\n");
        scanf("%d", &menu);

        switch( menu )
        {
            case 1 :
            //adicionarPessoa();
            break;

            case 2 :
            removerPessoa();
            break;

            case 3 :
            buscarPessoa();
            break;

            case 4 :
            listarTodos();
            break;

            case 5 :
            printf("Saindo\n");
            break;
                
            default :
            printf("Invalido\n");
        }
    }while (menu != 5);
}

void adicionarPessoa(pessoa* Head){
    pessoa *new = (pessoa *) malloc (1);



    printf("Digite idade, nome e email: ");
}