/*Escreva um programa em C para ler uma quantidade indeterminada de temperaturas em
graus Celsius. Para cada temperatura fornecida escrever a correspondente em graus
Fahrenheit. Após a impressão de cada conversão exibir a pergunta “Nova temperatura (1.sim
2.não)?”. Se o usuário responder com o valor 2 o programa deve ser encerrado, caso
contrário deverá ler outra temperatura em Celsius.*/

#include <stdio.h>

int main()
{

    int n1,condicao;

    do 
    {
        scanf("%d",&n1);
        printf("%d\n", (n1*9/5+32));
        
        printf("Nova temperatura (1.sim 2.não)?\n");
        scanf("%d",&condicao);

    }   while (condicao==1);
}