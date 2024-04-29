/*Fac¸a um programa que leia tres valores inteiros e chame uma func¸ ˆ ao que receba estes 3 ˜
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, ´
o segundo menor valor na variavel do meio, e o maior valor na ´ ultima vari ´ avel. A func¸ ´ ao˜
deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. ˆ
Exibir os valores ordenados na tela.*/

#include <stdio.h>


int organizaNumeros(int *a,int *b,int *c);

int main(){
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    organizaNumeros(&a, &b, &c);

    return 0;




}

int organizaNumeros(int *a,int *b, int *c){

    int n1,n2,n3;
    n1 = *a;
    n2 = *b;
    n3 = *c;

    if(n1>n2 && n2>n3){
        *c = n1;
        *b = n2;
        *a = n3;
    }

    if(n2>n1 && n1>n3){
        *a = n3;
        *b = n1;
        *c = n2;
    }
    if(n3>n1 && n1>n2){
        *b = n1;
        *a = n2;
    }

    if(n1>n3 && n3>n2){
        *a = n2;
        *b = n3;
        *c = n1;
    }

    if(n2>n3 && n3>n1){
        *a = n1;
        *b = n3;
        *c = n2;
    }

    printf("%d %d %d\n",*a,*b,*c);
    
    if(a==b && b==c && a==c){
        return 1;
    }else {
        return 0;
    }
}