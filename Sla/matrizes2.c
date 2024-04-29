#include <stdio.h>

int main(){
    int a,b,i,j,matriz[3][5], MATRIZ[3][5],mult,matrizfinal[3][5];

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            scanf("%d", &matriz[i][j]);
            scanf("%d", &MATRIZ[i][j]);
        }
    }

        for(a=0;a<3;a++){
            for(b=0;b<5;b++){
                mult = matriz[a][b] * MATRIZ[a][b];
                printf("%d\n", mult);
                matrizfinal[a][b] = mult;
            }
        }

}