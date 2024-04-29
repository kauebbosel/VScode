/*Implemente um programa em C que utiliza a estrutura
apresentada para implementar uma lista. O programa
deve mostrar ao usuario duas opcoes. Se o usuario 
escolher 1, a lista deve ser impressa; se escolher 2, ele
deve entrar com o valor do conteudo do novo elemento da lista.*/
#include <stdio.h>
#include <stdlib.h>

struct cel{
    int conteudo;
    struct cel *prox;
};
typedef struct cel celula;  

celula cria(celula *p);
void imprime(celula *p);

int main(){
    celula c;       //variável 
    celula *p;      //pointer 
    celula *inicio;    //pointer que sera usado para apontar cabeça
    
    inicio = (celula *)malloc(sizeof(celula));     //declaração de lista vazia com cabeça
    inicio -> prox = NULL;     //para dizer que não existe ninguém depois, criando uma vazia

    printf("%p",inicio);

    celula *inicio;             //declaração de lista vazia sem cabeça
    inicio = NULL;      


}

celula cria(celula *p){
    
}