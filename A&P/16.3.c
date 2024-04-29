#include <stdio.h>
//só fiz estruturas de repetição
int main(){
    int a,b,M[4][4],i,j,soma,soma2=0,soma3,soma4;

    for(a=0;a<4;++a)
        for(b=0;b<4;++b)
        {
            scanf("%d", &M[a][b]);
        }
            for(int i=0;i<4;++i)
                for(int j=0;j<4;++j)
                {
                    if(i<2 && j<2)
                    {
                        soma = M[i][j] + soma;
                    }
                }
            for(int i=0;i<4;++i)
                for(int j=0;j<4;++j)
                {
                    if(i>1 && j>1)
                    {
                        soma2 = M[i][j] + soma2;
                    }
                }
            for(int i=0;i<4;++i)
                for(int j=0;j<4;++j)
                {
                    
                }
        
}