/*Escreva	 um	 programa	 em	 C	 que	 leia	 5	 valores	 inteiros	 e	 imprima	 para	
cada	um	o	seu	correspondente	valor	absoluto.	Para	obter	o	valor	absoluto	
do	número	utilize	a	função	Absoluto especificada	abaixo	2:		*/

#include <stdio.h>
int absoluto(int n);
int main(){
 int numero, i;

 for(i = 0; i < 5; i++){
    printf("digite o %d número: ", i+1);
    scanf("%d", &numero);
    printf("Valor absoluto: %d\n", absoluto(numero));
 }
 return 0;
}

int absoluto(int n){
    if(n<0)
    {
        n = n*(-1);
    }
    return n;
}