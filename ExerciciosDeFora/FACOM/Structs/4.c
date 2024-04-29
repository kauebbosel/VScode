/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. ´
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral. ´
(d) Encontre o aluno com menor media geral ´
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovac¸ao. */

#include <stdio.h>

struct Alunos{
    int matricula[30], p1[30],p2[30],p3[30];
    char nome[30];
};

int main(){
    struct Alunos a;
    int AlunosQuantidade,maiorNotaP1=0,maiorMedia=0,menorMedia=10,media=0;
    
    scanf("%d",&AlunosQuantidade);
    
    for(int i=0;i<AlunosQuantidade;i++)
    {
        scanf("%d%d%d%d",&a.matricula[i],&a.p1[i],&a.p2[i],&a.p3[i]);
        fflush (stdin);
        fgets(a.nome, 30, stdin);
        media = (a.p1[i]+ a.p2[i]+ a.p3[i])/3;

        if(maiorNotaP1 < a.p1[i]){
            maiorNotaP1 = a.p1[i];
        }

        if(media<6){
            printf("reprovado\n");
        }else{
            printf("aprovado\n");
        }

        if(maiorMedia < media){
            maiorMedia = media;
        }

        if(menorMedia > media){
            menorMedia = media;
        }        
    }

    printf("maior nota P1:%d maior media%d menor media%d",maiorNotaP1,maiorMedia,menorMedia);

}