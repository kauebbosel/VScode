#include <stdio.h>

int main(){

    int a,b,i,j,M1[5][5],soma;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &M1[i][j]);
            if(i==3){
                soma = soma + M1[i][j];
                printf("%d %d ", soma, M1[i][j]);
            }
        }
    }
        
}