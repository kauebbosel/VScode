/*Escreva um programa para ler 5 frases (considere que cada frase possui no máximo 70
caracteres). Converter todas as letras minúsculas existentes na frase (somente as letras
minúsculas) para maiúsculas. Imprimir cada frase após a conversão.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[5][71];
    int length;

    for(int i=0;i<5;i++)
    {
        fgets(str[i], sizeof(str[i]) ,stdin);
        
        length = strlen(str[i]);
        
        for(int j=0;j<length;j++)
        {
            str[i][j] = toupper ((unsigned char)str[i][j]);
        }
        printf("%s",str[i]);
    }
}