#include <stdio.h>

int main(){

    int i,valor,valorfinal=0, vetor[10];

    printf("digite o vetor");
        for(i=0;i<10;i++){
            scanf("%d", &vetor[i]);
        }   

    printf("digite o valor");
    scanf("%d", &valor);
        
        for(int j=0;j<10;j++){
            if(valor==vetor[j]){
                valorfinal = valorfinal +1;
            }    
    }
    printf("%d", valorfinal);
}