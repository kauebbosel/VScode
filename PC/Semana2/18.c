/*Um posto está vendendo combustíveis com a tabela de descontos abaixo. Escreva um
programa que leia o número de litros vendidos, o tipo de combustível (codificado da
seguinte forma: 1-álcool 2-Gasolina), o preço do combustível, calcule e imprima o valor a
ser pago pelo cliente.

Álcool Até 20 litros, desconto de 3 % por litro.
Acima de 20 litros, desconto de 5 % por litro.

Gasolina Até 15 litros, desconto de 3,5 % por litro.
Acima de 15 litros, desconto de 6 % por litro*/

#include <stdio.h>
int main()
{
    float litros, precoGas,tipo,valor;

    scanf("%f%f", &litros, &precoGas);

    scanf("%f", &tipo);
    if(tipo==1)
    {
        if(litros>20)
        {
            printf("valor:%f", (litros*precoGas)-((litros*precoGas)*0.05));
        }
        if(litros<20)
        {
            printf("valor:%f", (litros*precoGas)-((litros*precoGas)*0.03));
        }
    }
    else
    {
        if(litros>15)
        {
            printf("valor:%f", (litros*precoGas)-((litros*precoGas)*0.06));
        }
        if(litros<15)
        {
            printf("valor:%f", (litros*precoGas)-((litros*precoGas)*0.035));
        }
    }
}