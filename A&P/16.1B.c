#include <stdio.h>

int main(){
    int a,b,i=0,j=0,M1[5][5],soma=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &M1[i][j]);
            if(j==2){
                soma = M1[i][j] + soma;
                printf("%d %d \n", soma, M1[i][j]);
            }
        }   
    }
}