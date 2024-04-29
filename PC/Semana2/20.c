/*Escreva um programa que leia a idade de 2 homens e 2 mulheres (considere que a idade dos
homens será sempre diferente, assim como das mulheres). Calcule e escreva a soma das
idades do homem mais velho com a mulher mais nova, e o produto das idades do homem
mais novo com a mulher mais velha.*/
#include <stdio.h>

int main()
{
    int homem,homem2,mulher,mulher2,Hmaior,Fmaior,Fmenor, Hmenor;

    scanf("%d%d%d%d", &homem,&homem2,&mulher,&mulher2);

    if(mulher>mulher2)
    {
        mulher = Fmaior = mulher;
        mulher2 = Fmenor = mulher2;
    }
        else
        {
            mulher = Fmenor = mulher;
            mulher2 = Fmaior = mulher2;
        }
    
    if(homem>homem2)
    {
     Hmaior = homem;
     Hmenor = homem2;
    }
        else
        {
            Hmenor = homem;
            Hmaior = homem2;
        }

        printf("soma:%d produto:%d", Hmaior+Fmenor,Hmenor*Fmaior);
}