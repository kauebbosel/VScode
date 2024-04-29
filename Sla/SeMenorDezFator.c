#include <stdio.h>
#include <math.h>

int main(){

    int x,y,fator,i=0;

    printf("Digite 10 números");
    while(i<10){
        scanf("%d", &x);
        if(x<7){
            i = i+1;
            y = y+1;
            fator = y * x;
            printf("%d", fator);
            
        }
    }
}