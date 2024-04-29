#include <stdio.h>

int main(){
    int i=0, j=0, MA[2][3], MB[2][3],MS[2][3], MD[2][3], a=0, b=0;

    printf("Digite matriz A e B ");

    for(i=0;i<2;i++){
        for(j=0;j<3;++j)
        {
            scanf("%d", &MA[i][j]);
        }
    }
    
            for(int ii=0;ii<2;++ii)
               for(int jj=0;jj<3;jj++)
               {
                scanf("%d", &MB[ii][jj]);
               }

                for(a=0;a<2;++a)
                    for(b=0;b<3;++b)
                    {
                    MS[a][b] = MA[a][b] + MB[a][b];
                    }

                        for(int D=0;D<2;++D)
                            for(int E=0;E<3;++E)
                            {
                                MD[D][E] = MA[D][E] - MB[D][E];
                            }

                                for(int D=0;D<2;++D)
                                    for(int E=0;E<3;++E)
                                    
                                    {
                                        printf("SOMA:%d DIFERENÇA: %d\n", MS[D][E],MD[D][E]);
                                    }



}