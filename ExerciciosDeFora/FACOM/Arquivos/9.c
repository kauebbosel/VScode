/*Faca um programa que receba dois arquivos do usuario, e crie um terceiro arquivo com
o conteudo dos dois primeiros juntos (o conteudo do primeiro seguido do conteudo do
segundo).*/

#include <stdio.h>


int main(){
    char str[100],str2[100];
    char str3[100], car;
    FILE *fp, *fp2, *fp3;
    int teste=0;

    printf("arquivo 1:\n");
    fgets(str, sizeof(str), stdin);
    //getchar();
    printf("arquivo 2:\n");
    fgets(str2, sizeof(str2), stdin);
    for(int i=0; str[i] != '\0' ;i++){
        if(str[i] ==  '\n'){
            str[i] = '\0';
        }
    }
    for(int i=0;str2[i] != '\0';i++){
        if(str2[i] ==  '\n'){
            str2[i] = '\0';
        }
    }

    fp = fopen(str, "r");
    if(fp == NULL){
        printf("treta3\n");
        return 1;
    }

    fp2 = fopen(str2, "r");
    if(fp2 == NULL){
        printf("treta4\n");
        return 1;
    }

    fp3 = fopen("kaue.txt", "w");

    while((car = fgetc(fp)) != EOF){
        fputc(car, fp3);
    }
    while((car = fgetc(fp2)) != EOF){
        fputc(car, fp3);
    }

    fclose(fp);
    fclose(fp2);
    fclose(fp3);
    return 0;
}