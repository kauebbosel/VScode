/*Escreva um programa para ler 2 valores (considere que não serão informados valores iguais)
e escrever o maior deles.*/

#include <stdio.h>
int main(){
    int valor,valor2;

    scanf("%d%d", &valor, &valor2);

    if(valor>valor2){
    printf("%d", valor);
    }
        else{
            printf("%d", valor2);
        }
}