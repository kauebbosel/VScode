#include <stdio.h>

int main(){
    int x;
    printf("Digite sua idade");
    scanf("%d", &x);

    if(x<8){
        printf("Infantil A");}
        if(x>7 && x<11){
            printf("Infantil B");}
            if(x>10 && x<14){
                printf("Juvenil A");}
                if(x>13 && x<18){
                    printf("Juvenil B");}
                        if(x>17){
                            printf("Adulto");}

                        
                    
}