/*Escreva um programa para ler uma quantidade indeterminada de palavras (considere que
cada palavra possui no máximo 30 caracteres e contém apenas letras minúsculas). Converta
todas as letras de cada palavra lida para maiúsculas. Imprimir cada palavra após a
conversão. O programa se encerra quando for digitada uma palavra que começa pela letra 'f'.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[31];
    
    while(1)
    {
        fgets(str,sizeof(str), stdin);
        
        if(str[0]=='f')
        {
            break;
        }
        
        for (int i = 0; i < strlen(str); i++) {
            str[i] = toupper(str[i]);
        }        

        printf("Palavra convertida: %s\n", str);
    }
}