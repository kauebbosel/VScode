#include <stdio.h>
#include <math.h>
int main(){
    int resto, i;
    float vetor[10];
    

    printf("Digite");

    for(i=0;i<=9;i++){
        scanf("%f", &vetor[i]);
        resto = i%2;
        if (resto=0){
            vetor[i] = vetor[i]*2;
        }
                printf("%f", vetor[i]);
    }

}