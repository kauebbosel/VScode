/*Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa
deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve
escrever o nome e a idade das pessoas mais jovens e mais velhas.*/

#include <stdio.h>
#include <string.h>

int main(){
    typedef struct{
        int idade;
        char nome[30];
    }pessoa;
    pessoa arr[10];
    
    for(int i = 0; i < 10; i++){
        scanf("%d",&arr[i].idade);
        fgets(arr[i].nome, 30, stdin);
            if(arr[i].idade < 0 ){
                break;
        }
        printf("%d %s\n",arr[i].idade, arr[i].nome);
    }
}