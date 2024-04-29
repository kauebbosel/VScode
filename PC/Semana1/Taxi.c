/*Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o
preço do combustível é de R$ 2,70, escreva um programa para ler: a marcação do odômetro
(Km) no início do dia, a marcação (Km) no final do dia, o número de litros de combustível
gasto e o valor total (R$) recebido dos passageiros. Calcular e escrever: a média do consumo
em Km/L e o lucro (líquido) do dia.*/

#include <stdio.h>

int main(){
    int iniciokm, fimkm, KmL, gasolina, lucroliquido, valortotal, kmandado;

    printf("Inicio dia KM, final dia KM, Gasolina e dinheiro");
    scanf("%d%d%d%d",&iniciokm, &fimkm, &gasolina, &valortotal);

    kmandado = fimkm - iniciokm;
    
    KmL = kmandado/gasolina;

    lucroliquido = valortotal - (gasolina*2.7);

    printf("Km/L:%d", KmL);
    printf("Lucro:%d", lucroliquido);


}