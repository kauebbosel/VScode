/*Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura.*/

#include <stdio.h>


struct infoPessoa{
    char nome[30],endereco[30];
    int idade;
};

struct infoPessoa info;

int main(){

    printf("digite idade, nome, endereço");

    scanf("%d",&info.idade);
    getchar();

    fgets(info.nome, sizeof(info.nome), stdin);
    fgets(info.endereco, sizeof(info.endereco), stdin);

    printf("%d\n%s%s",info.idade,info.nome,info.endereco);
}