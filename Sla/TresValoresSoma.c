#include <stdio.h>

int main(){
    int x, y, z;

    printf("digite os números");
    scanf("%d%d%d", &x, &y, &z);

    if((x>y && y>z) ){
        printf("%d", x+y);}
        if(x>y && z>y){
            printf("%d", x+z);}
            if(y>x && x>z){
                printf("%d", y+x);}
                if(y>x && z>x){
                
                    printf("%d", z+y);}
                    

                    /*printf("%d", y+z);}
                if(z>x && y>x){*/
/*3.2.1 - 2.3.1 - 1.3.2 -  */



                        /*x>y e y>z x>y e z>y - x = 1 
                          y>x e x>z y>x e z>x - y = 2 2>1 e 1>3 2>1 e 3>1
                          z>x e y>x z>x e x>y - z = 3 3>1 e 2>1 3>1 e 1>2 */
    




}
