#include <stdio.h>

int main(){

    int i,o;
    float vetor[10];
    float vetor2[10];

    printf("Digite");
    for(i=0;i<=9;i++){
        
        scanf("%f", &vetor[i]);
        vetor2[i] = vetor[i];
    }
    for(o=0;o<=9;o++){
        printf("%f\n", vetor2[o]);
        printf("%f\n", vetor[o]);
    }
}