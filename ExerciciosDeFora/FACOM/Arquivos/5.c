/*Fac¸a um programa que receba do usuario um arquivo texto e um caracter. Mostre na tela ´
quantas vezes aquele caractere ocorre dentro do arquivo.*/

#include <stdio.h>
int main(){
    FILE *pf;
    char procuraCar,str[30],car;
    int contadorCar=0;

    scanf("%s",str);
    printf("digite car agora\n");
    char cu = getchar();
    scanf("%c",&procuraCar);

    pf = fopen(str, "r");
    if(pf == NULL){
        printf("deu treta");
        return 1;
    }

    while((car = fgetc(pf)) != EOF){
        if(car == procuraCar){
            contadorCar++;
        }
    }
    printf("%d",contadorCar);


}