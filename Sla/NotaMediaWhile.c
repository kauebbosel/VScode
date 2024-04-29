#include <stdio.h>

int main(){
    float media=0,n1=0,n2=0;
    int reset;


    do{
        
        printf("Digite sua nota 1\n");
        scanf("\n%f", &n1);
        
        printf("digite sua nota 2\n");
        scanf("\n%f", &n2);

    while(n1<0 || n1>10){
        printf("Nota 1 inválida\n");
        scanf("\n%f", &n1);}
    
    while (n2<0 || n2>10){
        printf("nota 2 inválida\n");
        scanf("\n%f", &n2);
    }
    
    media = (n1+n2)/2;
        printf("Sua média é %f\n", media);


        do {
            printf("Digite 1 para continuar, 2 para parar\n");
            scanf("%d", &reset);
        }while(reset!=1 && reset!=2);
       

    }while(reset==1);
    
    return 0;

    

}