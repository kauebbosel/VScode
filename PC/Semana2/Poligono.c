/*Escreva um programa para ler o número de lados de um polígono regular, e a medida do
lado (a medida do lado só deve ser lida para polígono com 3 ou 4 lados). Calcular e
imprimir o seguinte:
- Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
- Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
- Se o número de lados for igual a 5 escrever PENTÁGONO.
OBS: Considere que o usuário só informará os valores 3,4 ou 5.*/

#include <stdio.h>
int main(){
    int lados, medida;

    scanf("%d", &lados);
    scanf("%d",&medida);

        if(lados==5){
        printf("pentagono");
    }
    if(lados==4){
        printf("QUADRADO %d", medida*4);
    }
    if(lados==3){
        printf("TRIANGULO %d", medida*3);
    }
    if(lados>5){
        printf("POLIGONO NÃO IDENTIFICADO");
    }else{
        printf("NÃO É UM POLIGONO");
    }
}