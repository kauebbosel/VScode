/*Escreva um programa para ler 3 valores e escrever a soma dos 2 maiores. Considere que o
usuário não informará valores iguais.*/
#include <stdio.h>
int main(){
    int valor1,valor2,valor3;
    
    scanf("%d%d%d", &valor1,&valor2,&valor3);
    
    if(valor1>valor2 && valor2>valor3){
        printf("%d", valor1+valor2);
    }

        if(valor2>valor1 && valor1>valor3){
            printf("%d", valor2+valor1);
        }
            if(valor3>valor1 && valor1>valor2){
                printf("%d", valor3+valor1);
            }
                if(valor3>valor2 && valor2>valor1){
                    printf("%d", valor3+valor2);
                }
                    if(valor1>valor3 && valor3>valor2){
                        printf("%d", valor1+valor3);
                    }
 //                       if(valor1>valor2 && valor3>valor1){
  //                          printf("%d", valor1+valor3);
   //                     }
}   
