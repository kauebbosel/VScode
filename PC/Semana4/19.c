/*Escreva um programa para ler 10 palavras. Para cada palavra lida escrever a primeira e a
última letra. Considere que cada palavra possui no máximo 30 caracteres.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[2][31];
    int ultimo, lastCar;

    for(int i=0;i<2;i++)
    {
        scanf("%s",str[i]);
    }

    for(int i=0;i<2;i++)
    {
        printf("%c",str[i][0]);
        lastCar = strlen(str[i]); 
        ultimo = lastCar -1;
        printf(" %c ",str[i][ultimo]);
    }
}