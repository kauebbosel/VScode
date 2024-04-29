#include <stdio.h>

int main(){
    int a,b,maior=0,i,j,matriz[2][2],mr[2][2];

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
            }
        }
    }

    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            mr[a][b] = (matriz[a][b] * maior);
            printf("%d ", mr[a][b]);
        }
    }
}