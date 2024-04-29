/*Fac¸a um programa no qual o usuario informa o nome do arquivo e uma palavra, e retorne ´
o numero de vezes que aquela palavra aparece no arquivo. */

#include <stdio.h>

int main(){
    char palavra[100], str[100], comparado[100];
    int i=0, contador=0;

    printf("digite:arquivo palavra\n",i);
    scanf("%s %s",str, palavra);

    FILE *fp = fopen(str, "r");
    if(fp == NULL){
        printf("treta");
        return 1;
    }
    while ((fscanf(fp, "%s", comparado)) != EOF ){
        int j=0;
            while(comparado[j] == palavra[j]){
                j++;
                if(comparado[j] == '\0' && palavra[j] == '\0'){
                    contador++;
                    break;
                }
            }      
    }
    printf("contador:%d\n",contador);

    fclose(fp);
    return 0;
}