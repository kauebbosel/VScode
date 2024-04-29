/*Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros, ´
(b) Peca para o usuario digitar os 5 numeros no espac¸o alocado, ´
(c) Mostre na tela os 5 numeros, ´
(d) Libere a memoria alocada. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p,n,*inicio;

    printf("digite nmrs de inteiros");
    scanf("%d",&n);

    if ((p = (int *)malloc(n *sizeof(int))) == NULL){
        printf("treta");
        return 1;
    }
    inicio = p;
    for(int i=0;i < n; i++, p++){
        scanf("%d",p);
    }

    p = inicio;
    for(int i=0;i < n;i++, p++){
        printf("%d",*p);
    }

}