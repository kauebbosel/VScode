#include <stdio.h>

int main(){

    int i,a=0,codigo,vetor[10];

    printf("digite o vetor");
    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }
        printf("digite o codigo");
        scanf("%d", &codigo);

            for(int j=0;j<10;j++){
                if(vetor[j]==codigo){
                    a = a+1;
                }
            }    
            if(a>0) {
                printf("ACHEI");
            }else{
                printf("NÃO ACHEI");}

                
            
}