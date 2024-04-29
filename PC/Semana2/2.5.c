/*Escreva um algoritmo para repetir a leitura de uma senha até que ela seja válida. Para cada
leitura da senha incorreta informada escrever a mensagem “SENHA INVÁLIDA”. Quanto a
senha for informada corretamente deve ser impressa a mensagem “ACESSO PERMITIDO”
e o algoritmo encerrado. Considere que a senha correta é o valor 2005.*/

#include <stdio.h>
int main()
{
    int n1;

    do 
    {
        scanf("%d",&n1);
            if(n1!=2005)
            {
                printf("SENHA INCORRETA");

            }else if (n1==2005)
                {
                    printf("ACESSO PERMITIDO");
                }
    } while (n1!=2005);
}