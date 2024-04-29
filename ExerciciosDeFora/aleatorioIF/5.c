/*Escreva	um	programa	que	leia	5	números	inteiros	positivos	(utilize	uma	
função	 que	 leia	 esse	 número	 e	 verifique	 se	 ele	 é	 positivo).	 Para	 cada	
número	informado	escrever	a	soma	de	seus	divisores	(exceto	ele	mesmo).	
Utilize	a	função	SomaDivisores para		obter	a soma.	
Nome:	SomaDivisores	
Descrição:	Calcula	a	soma	dos	divisores	do	número	informado	(exceto	
ele	mesmo).	
Entrada:	Um	número	inteiro	e	positivo.	
Saída:	A	soma	dos	divisores.	
Exemplo:	Para	o	valor	8:	1+2+4	=	7*/

#include <stdio.h>
int SomaDivisores(int n);
int main(){
 int numero, i;

 for(i = 0; i < 5; i++){
 printf("digite o %d número: ", i+1);
 scanf("%d", &numero);
 printf("\n\tSoma dos divisores: %d\n", SomaDivisores(numero));
 }
 return 0;
}

int ehPositivo(int a)
{
    while(a<0)
    {
        scanf("%d",&a);
    }
    return a;

}

int SomaDivisores(int n)
{
    int somatotal;
    for(int i=1;i<n;i++)
    {
        if(n % i == 0)
        {
            somatotal += i;
        }
    }
    return somatotal;
}

