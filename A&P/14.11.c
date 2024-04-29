#include <stdio.h>

int main(){

    int i,media,alunosAprovados=0,vetorsoma,vetor[10];

    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
        vetorsoma = vetorsoma + vetor[i];
    }
        media = vetorsoma/10;
        printf("a média é: %d \n", media);
        
        for(int j=0;j<10;j++){
            if(vetor[j]>media){
                alunosAprovados = alunosAprovados + 1;    
            }}
        printf("%d alunos acima da media",alunosAprovados);

}