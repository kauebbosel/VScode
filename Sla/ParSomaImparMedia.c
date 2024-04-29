#include <stdio.h>

int main(){

    int x,resto,impar,par,somapar=0,somaimpar=0,i=0;


    printf("Digite 10 números\n");
    do{
        scanf("%d", &x);
        i = i+1;
        resto=x%2;
            if(resto==0){
            par = par+1;
            somapar = x + somapar;
            } 
            else{
            impar = impar+1;
            somaimpar = x + somaimpar;
            }
            
    }while(i<10);
    printf("Resultado da soma dos pares: %d", somapar);
    printf("Resultado da soma dos impares: %d", somaimpar);


}