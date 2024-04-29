#include <stdio.h>

int main(){

    int i,valor, vetor[10];

    printf("digite o array");

    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }
    printf("digite o valor");
    scanf("%d", &valor);

    for(int j=0;j<10;j++){
        if(vetor[j]==valor){
            printf("%d\n", j);
        }
    }

}