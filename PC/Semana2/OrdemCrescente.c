/*Escreva um programa para ler 2 valores (considere que não serão lidos valores iguais) e
escreve-los em ordem crescente.*/

#include <stdio.h>
int main(){
    int valor, valor2;
    
    scanf("%d%d", &valor, &valor2);

    if(valor>valor2){
        printf("%d %d", valor, valor2);
    }else{
        printf("%d %d", valor2, valor);
    }
}