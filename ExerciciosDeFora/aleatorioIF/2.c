/*Escreva	uma	função	que	calcule e	retorne a	distância	entre	dois	pontos	(	
x1, y1)	e	 (x2, y2).	Todos	os números	e	 valores	de	 retorno	devem	ser	do	
tipo	float.*/

#include <stdio.h>
#include <math.h> // Biblioteca para a função sqrt (square root - raiz quadrada)
float calculaDistancia(float Px1, float Px2, float Py1, float Py2);
int main(){
 float x1, x2, y1, y2, res;
 printf("Digite as coordenadas X e Y do ponto 1:\n");
 scanf("%f %f", &x1, &y1);

 printf("Digite as coordenadas X e Y do ponto 2:\n");
 scanf("%f %f", &x2, &y2);

 res = calculaDistancia(x1, x2, y1, y2);
 printf("A distancia entre os pontos eh: %f\n", res);
 return 0;
}
float calculaDistancia(float Px1, float Px2, float Py1, float Py2)
{
    float resultado,a,b;

    if(Px1>Px2)
    {
        a = Px1 - Px2;
    }if(Px2>Px1)
    {
        a = Px2 - Px1;
    }
    if(Py1>Py2)
    {
        b = Py1-Py2;
    }if(Py2>Py1)
    {
        b = Py2-Py1;
    }
    resultado = a+b;

    return resultado;
}
