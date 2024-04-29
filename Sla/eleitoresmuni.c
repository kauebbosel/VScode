#include <stdio.h>
#include <stdlib.h>

int main(){
    int eleitor, branco, nulo, valido;
    double avg1,avg2,avg3;

    printf("Numero votos branco, nulo e valido");
    scanf("%d%d%d", &branco,&nulo,&valido);

    eleitor = branco + nulo+ valido ;

    avg1=eleitor*100/branco;
    
    printf("Numero total de votos: %d", &eleitor);

    printf("porcentagem de votos brancos: %lf",&avg1);


    
    
}