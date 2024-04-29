/*Faca um programa que leia o conteudo de um arquivo e crie um arquivo com o mesmo ´
conteudo, mas com todas as letras minusculas convertidas para maiusculas. Os nomes 
dos arquivos serao fornecidos, via teclado, pelo usuario. A funcao que converte 
maiuscula para minuscula  e o toupper(). Ela  e aplicada em cada caractere da string*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fp, *fp2;
    char car,str[100],str2[100];

    scanf("%s",str);
    fp = fopen(str, "r");
    if(fp == NULL){
        printf("nao");
        return 1;
    }

    scanf("%s",str2);
    fp2 = fopen(str2,"w");
    if(fp2 == NULL){
        printf("não2");
        return 1;
    }

    while((car = fgetc(fp)) != EOF){
        car = toupper(car);
        
    }

    return 0;
}