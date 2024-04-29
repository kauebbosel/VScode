/*Fac¸a um programa que receba do usuario um arquivo texto. Crie outro arquivo texto ´
contendo o texto do arquivo de entrada, mas com as vogais substitu´ıdas por ‘*’.*/

#include <stdio.h>
int main(){
    FILE *fp,*fp2;
    char car,str[30],str2[100];
    int i=0;

    scanf("%s",str);
    fp = fopen(str, "r");
    if(fp == NULL){
        printf("treta");
        return 1;
    }

    scanf("%s",str2);
    fp2 = fopen(str2, "w");
    if(fp2 == NULL){
        printf("treta2");
        return 1;
    }

    while((car = fgetc(fp)) != EOF){
        if(car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u' || car == 'A' || car == 'E' || car == 'I' || car == 'O' || car == 'U'){
            fputc('*',fp2);
        }else {
            fputc(car, fp2);
        }
    }

    return 0;
}