/*Fac¸a um programa que receba duas frases distintas e imprima de maneira invertida,
trocando as letras A por *. */

#include <stdio.h>
#include <string.h>

int main(){
    char Str[100][2], StrInverso[100][2];

    for(int i = 0; i < 2; i++){ 
        fgets(Str[i], 100, stdin);
        printf("teste 1:%s\n", Str[i]);
    }
    
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < strlen( Str[i][j] ); j++ ){
            if(Str[i][j] == 'a' || Str[i][j] == 'A'){
                Str[i][j] = '*';
            }
            printf("teste 2:%s\n", Str[i][j]);
        }
    }

    for(int i = 0; i < strlen( Str[i] ); i++){

    }
    
}