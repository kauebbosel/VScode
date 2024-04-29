/*Escreva um programa para ler 10 palavras. Para cada palavra lida escrever a quantidade de
caracteres existentes na palavra. Considere que cada palavra possui no máximo 30
caracteres.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char pal[10][31];

    for(int i=0;i<10;i++)
    {
        scanf("%s",&pal[i]);
    }

    for(int i=0;i<10;i++)
    {
    printf("%d ", strlen(pal[i]));        
    }

    
    
}