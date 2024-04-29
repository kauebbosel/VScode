#include <stdio.h>
int main(){
   int i,a=0,vetorX[10],vetorR[10];

    printf("Digite o vetor X ");
    for(i=0;i<10;i++){
        scanf("%d", &vetorX[i]);
            if(vetorX[i]<0){
                vetorR[a] = vetorX[i];
                a = a++;
                printf("%d ", vetorR[a]);
            }
    }
        for(int j=0;j<a;j++){
            printf("%d", vetorR[a]);
        }
}