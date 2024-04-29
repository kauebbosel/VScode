#include <stdio.h>

int main(){
    int a,b,i,j,MA[5][5],MB[5][5];

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &MA[i][j]);
            if((MA[i][j]%2) == 0 ){
                MB[i][j] = 0;
            }else{
                MB[i][j] = 1;
            }
        }
    }
    
    for(a=0;a<5;a++){
        for(b=0;b<5;b++){
            printf("%d ", MB[a][b]);
        }
    }

}