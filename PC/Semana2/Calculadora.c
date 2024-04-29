/*Escreva um programa para ler 2 valores e uma das seguintes operações a serem executadas
(codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação).
Considere que serão informados apenas códigos válidos. Calcular e escrever o resultado
dessa operação sobre os dois valores lidos.*/

#include <stdio.h>
int main(){
    int operacoes,valor, valor2;

    scanf("%d%d%d", &operacoes,&valor,&valor2);
    
    if(operacoes==1){
        printf("%d",valor+valor2);
    }
    if(operacoes==2){
        printf("%d", valor-valor2);
    }
    if(operacoes==3){
        printf("%d", valor/valor2);
    }
    if(operacoes==4){
        printf("%d", valor*valor2);
    }
}