/*Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma
mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês
em que ela nasceu).*/

#include <Stdio.h>
int main(){
    int dia,mes, ano,apto;

    scanf("%d%d%d", &dia, &mes, &ano);
    apto = 2023-ano;
    if(apto>=18){
        printf("pode votar");
    }else{
        printf("não pode");
    }
}