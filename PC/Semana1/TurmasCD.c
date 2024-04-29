/*A turma C é composta de 60 alunos, e a turma D de 20 alunos. Escreva um programa que
leia o percentual de alunos reprovados na turma C, o percentual de aprovados na turma D,
calcule e escreva: a) O número de alunos reprovados na turma C. b) O número de alunos
reprovados na turma D. c) A percentagem de alunos reprovados em relação ao total de
alunos das duas turmas.*/

#include <stdio.h>
int main(){
    float reprovadoC, aprovadoD, aprovadoC, reprovadoD;

    printf("turma C e dps turma D");
    scanf("%f",  &reprovadoC);
    scanf("%f",  &aprovadoD);
    aprovadoC = reprovadoC*(0.6);
    reprovadoD = aprovadoD*(0.2);

    printf("Aprovados na turma C:%f\n", aprovadoC);

    printf("Reprovados na turma D:%f\n", reprovadoD);

    printf("Total de alunos reprovados:%f\n",(reprovadoD+reprovadoC));

}