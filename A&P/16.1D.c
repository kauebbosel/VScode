#include <stdio.h>

int main(){

    int a,b,i,j,M1[5][5],soma;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &M1[i][j]);
            if(i==0 && j == 4){
                soma = soma + M1[i][j];
            }
            if(i==1 && j == 3){
                soma = soma + M1[i][j];
            }
            if(i==2 && j == 2){
                soma = soma + M1[i][j];
            }
            if(i==3 && j == 1){
                soma = soma + M1[i][j];
            }
            if(i==4 && j == 0){
                soma = soma + M1[i][j];
            }
            printf("soma =%d\n", soma);
        }
    }
}
