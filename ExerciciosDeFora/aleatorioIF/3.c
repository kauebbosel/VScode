/*Escreva	 uma	 função	 potencia(base,	 expoente) que,	 quando	 chamada,	
retorna	baseexpoente.	Por	exemplo,	potencia(3,	4)	deve	retornar	81.	Assuma	
que	expoente	é um	inteiro	maior ou	igual	a	1.	*/

#include <stdio.h>
int potencia(int base, int expoente)
{
    int res,baseInicial;
    baseInicial = base;
    for(int i=0;i<expoente-1;i++)
    {
        base = baseInicial*base;
    }
    return base;
}
int main(){
 int b, e, res;
 printf("Digite a base: ");
 scanf("%d", &b);

 printf("Digite o expoente: ");
 scanf("%d", &e);


 res = potencia(b, e);
 printf("%d elevado %d eh igual a %d\n", b, e, res);
 return 0;
}