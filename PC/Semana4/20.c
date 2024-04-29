/*Escreva um programa para ler uma quantidade indeterminada de frases (considere que cada
frase possui no máximo 70 caracteres). Para cada frase imprima a quantidade de espaços em
branco que ela contém. O programa se encerra quando for digitada uma frase que não
contém espaços em branco.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[71];
    int length,contador;

    while(1)
    {
        contador = 0;
        fgets(str, sizeof(str), stdin);

        length = strlen(str);
        if (length > 0 && str[length - 1] == '\n') {
            str[length - 1] = '\0';
        }
        for(int i=0;i<length;i++)
        {
            if(str[i]== ' ')
            {
                contador++;
            }
        }
        printf("%d",contador);
        if(contador==0)
        {
            break;
        }
    }


}