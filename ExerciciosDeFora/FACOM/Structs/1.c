/**/

#include <stdio.h>


int main(){
    struct horário{
    int hora, minuto, segundo;
    };

    struct data{
        int dia, mes, ano;
    };

    struct compromisso{
        char descricao;
    };
    struct horário horario;
    struct compromisso compromisso;

    scanf("%d%d%d",&horario.hora,&horario.minuto,&horario.segundo);
    printf("%d",horario.minuto);

}