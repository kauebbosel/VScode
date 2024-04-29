/*Um mercado está vendendo frutas com a tabela de preços abaixo. Se o cliente comprar mais
de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 35,00, receberá ainda um
desconto de 20 % sobre esse total. Escreva um programa para ler a quantidade (em Kg) de
morangos e a quantidade (em Kg) de maçãs adquiridas e escreva o valor a ser pago pelo
cliente.

Até 5 Kg                Acima de 5 Kg
Morango R$ 5,00 p/Kg    R$ 4,00 p/Kg
Maçã R$ 3,00 p/Kg       R$ 2,00 p/Kg*/

#include <stdio.h>
int main()
{
    int mor,maca,kgtotal,morpreco,macapreco,precototal;

    scanf("%d%d", &mor,&maca);
    kgtotal = mor+maca;
    if(mor<5)
    {
        morpreco = mor*5;
    }   else
        {
        morpreco = mor*4;
        }
    if(maca<5)
    {
        macapreco = (maca*3);
    }   else
        {
        macapreco = (maca*2);
        }
    precototal = macapreco + morpreco;

    if((precototal)>=35)
    {
        precototal = precototal-(precototal*0.20);
        printf("%d\n", precototal);
    }
        else if(kgtotal>8)
        {  
            precototal = precototal-(precototal*0.20);
            printf("%d\n", precototal);
        }
    return 0;
}