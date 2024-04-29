/*Fac¸a um programa que receba do usuario um arquivo texto e mostre na tela quantas ´
vezes cada letra do alfabeto aparece dentro do arquivo.*/
#include <stdio.h>

int main(){
    FILE *fp;
    char car,str[30];
    int contadorLetra=0;

    scanf("%s",str);

    fp = fopen(str, "r");
    if(fp == NULL){
        printf("deu treta");
        return 1;
    }

    while((car = fgetc(fp)) != EOF){
        if(car != '0'&&car != '1'&&car != '2'&&car != '3'&&car != '4'&&car != '5'&&car != '6'&&car != '7'&&car != '8'&&car != '9'&&car != '\n'){
            contadorLetra++;
        }
    }
    printf("%d",contadorLetra);
}