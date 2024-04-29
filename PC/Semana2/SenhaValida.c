/*Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A
senha válida é o número 1234. Deve ser impressa uma das seguintes mensagens:
-ACESSO PERMITIDO caso a senha seja válida.
-ACESSO NEGADO caso a senha seja inválida.*/

#include <stdio.h>
int main(){
    int teste, senha=1234;

   printf("digite sua senha");
   scanf("%d", &teste);

   if(teste==senha){
   }    else{
            while(teste!=senha){
            printf("ACESSO NEGADO");
            scanf("%d", &teste);
            }
        }

    printf("ACESSO PERMITIDO");

}