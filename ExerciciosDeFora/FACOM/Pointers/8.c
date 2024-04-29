/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array. */

#include <stdio.h>

int main(){

    float arr[10];

    for(int i=0;i<10;i++){
        printf("%p\n",&arr[i]);
    }
}