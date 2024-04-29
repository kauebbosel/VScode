#include <stdio.h>

int main(){

    float x;
    
    printf("Digite nmr");
    scanf("%f", &x);

    if(x>0){
        printf("%f é positivo", x); }
    if(x<0){
        printf("%f é negativo", x);}
    
    if(x==0){
    printf("%f é zero", x);
    }


}   