#include <stdio.h>

int main(){

    int i,a, vetor[10], vetorW[10];
    printf("digite");
        for(i=0;i<10;i++){
            scanf("%d", &vetor[i]);
            }
        for(a=0;a<10;a++){
            vetorW[a] = vetor[i];
            i = i -1;
                printf("%d\n", vetorW[a]);
                printf("%d\n", vetor[i]);
                
        }
        


}