/*Uma loja vende bicicletas com um acréscimo de 50 % sobre o seu preço de custo. Ela paga a
cada vendedor 2 salários-mínimos mensais, mais uma comissão de 15 % sobre o preço de
custo de cada bicicleta vendida, dividida igualmente entre eles. Escreva um programa que
leia o número de empregados da loja, o valor do salário-mínimo, o preço de custo de cada
bicicleta, o número de bicicletas vendidas, calcule e escreva: O salário final de cada
empregado e o lucro (líquido) da loja.*/

#include <stdio.h>

int main(){
    int i=0,salario,empregados, bikecusto, bikequant,comissao,biketotal;

    scanf("%d%d%d%d", &salario, &empregados,&bikecusto, &bikequant);
    bikecusto = bikecusto+(bikecusto*0.5);
    biketotal = bikecusto*bikequant;
    comissao = (biketotal*0.15);
    salario = salario*2+comissao/empregados;

    for(i=0;i<1;i++){
        printf("salário dos empregados é %d\n",salario);
    }
    printf("lucro liquido:%d",biketotal-(salario*empregados));
}