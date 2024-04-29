#include <stdio.h>

int main(){
    int a,b,j,i,m1[7][4],menor=0,menorindex,menorindex2;

    for(i=0;i<7;i++){
        for(j=0;j<4;j++){
            scanf("%d", &m1[i][j]);
        }
    }

    for(a=0;a<7;a++){
        for(b=0;b<4;b++){
            if(m1[a][b]<menor){
                menor = m1[a][b];
                menorindex = a;
                menorindex2 = b;
            }
        }
    }
    printf("%d\n%d e %d", menor, menorindex, menorindex2);
}