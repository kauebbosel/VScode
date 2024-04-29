/*Escreva um programa para ler o número de eleitores de um município, o número de votos
brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em
relação ao total de eleitores.*/

#include <stdio.h>

int main(){
    int eleitores, votosb, votosn, votosv;
    scanf("%d%d%d%d", &eleitores,&votosb,&votosn,&votosv);
    printf("eleitores:%d votos brancos:%d votos nulos:%d votos válidos:%d",eleitores, ((votosb*eleitores)/100), ((votosn*eleitores)/100), ((votosv*eleitores)/100));

    }