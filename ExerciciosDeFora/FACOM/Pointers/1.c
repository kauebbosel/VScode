/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao. */

#include <stdio.h>

int main()
{
    int a; float b; char c; int i;
    int *d;float *e;char *f;
    
    scanf("%d%f",&a,&b);
    scanf(" %c",&c);

    d = &a;
    e = &b;
    f = &c;

    printf("%d %f %c\n%p %p %p",*d,*e,*f,*d,*e,*f);
}