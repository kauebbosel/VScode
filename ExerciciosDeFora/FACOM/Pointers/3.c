/*. Escreva um programa que contenha duas variaveis inteiras. Leia essas vari ´ aveis do ´
teclado. Em seguida, compare seus enderec¸os e exiba o conteudo do maior enderec¸o*/
#include <stdio.h>

int main()
{
    int n1,n2;
    int *pont1,*pont2;

    scanf("%d%d",&n1,&n2);

    pont1 = &n1;
    pont2 = &n2;

    if(*pont1>*pont2)
    {
        printf("%d",*pont1);
    }
    if(*pont2>*pont1)
    {
        printf("%d",*pont2);
    }


}