#include <stdio.h>

int main(){

    float x;

    printf("Digite nota");
    scanf("%f", &x);

    if(x<6){
        printf("nota D"); }
        if(x>5.1 && x<8){
            printf("Nota C");}
            if(x>7.1 && x<10){
                printf("Nota B");}
                if(x>9.1 && x<11){
                    printf("Nota A");}
                
}