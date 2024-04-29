#include <stdio.h>
int main(){
    FILE *fp;
    char car, str[30];
    int contaVogal=0,contaConsoante=0;;

    scanf("%s",str);

    fp = fopen(str, "r");
    if(fp == NULL) {
        printf("deu treta");
        return 1;
    }

    while((car = fgetc(fp)) != EOF){
        if(car == 'a' ||car ==  'e' ||car ==  'i' ||car ==  'o' ||car == 'u' ||car ==  'A' ||car ==  'E' ||car ==  'I' ||car ==  'O' ||car ==  'U'){
            contaVogal++;
        } else if(car != '\n'){
            contaConsoante++;
        }
    }
    printf("Vogal:%d\n",contaVogal);
    printf("consoante:%d",contaConsoante);
}