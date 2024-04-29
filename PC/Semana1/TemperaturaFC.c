/*Escreva um programa para ler uma temperatura em graus Fahrenheit, calcular e escrever o
valor correspondente em graus Celsius.*/

#include <stdio.h>

int main(){
  float fah;

  scanf("%f", &fah);
  fah = (fah-32)/9;
  printf("%f", fah*5);
}