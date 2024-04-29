/*Escreva uma função que receba	dois números inteiros retorne o menor número1*/

#include <stdio.h>
int compara(int a, int b);
int main(){
 int n1, n2, res;
 printf("Digite dois valores separados por espaço:\n");
 scanf("%d %d", &n1, &n2);

 res = compara(n1, n2);
 printf("o menor número eh: %d\n", res);
 return 0;
}

int compara(int a, int b)
{
    if(a<b)
    {
        return a;
    } else
    {
        return b;
    }
}