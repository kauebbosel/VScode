/*Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo. Escreva
um programa em C para ler 2 valores e imprimir o resultado da divisão do primeiro pelo
segundo. OBS: O programa deve validar a leitura do segundo valor (que não deve ser zero).
Enquanto for fornecido um valor nulo a leitura deve ser repetida. Utilize do...while().

Acrescenta a mensagem "Novo cálculo (1.sim 2.não) no fim do programa do exercício
anterior de forma a permitir que o usuário possa informar novos dados para o cálculo da
divisão.*/

#include <stdio.h>

int main ()
{
    int condicao,n1,n2;

    do 
    {
        scanf("%d",&n1);
        
        do 
        {
            scanf("%d",&n2);
        } while (n2==0);
        printf("divisão:%d", n1/n2);

        printf("Novo cálculo (1.sim 2.não)");
        scanf("%d",&condicao);
    } while(condicao==1);
}   