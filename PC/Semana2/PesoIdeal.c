/*Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino
2:masculino) de uma pessoa, construa um programa que calcule e imprima seu peso ideal,
utilizando as seguintes fórmulas:
- para homens: (72.7 * h)-58
- para mulheres: (62.1*h)-44.7*/


#include <stdio.h>
int main(){
    float altura, sexo;

    scanf("%f%f", &altura, &sexo);

    if(sexo==2){
        printf("%f", ((72.7*altura)-58));
    }   else{
        printf("%f", ((62.1*altura)-44.7));
        }
}