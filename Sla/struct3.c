#include<stdio.h>
#include<string.h>

#define Tam 20

struct aluno {
      int codigo;
      char nome[200];
      float nota1,nota2;
};

struct lista_alunos { 
	struct aluno vet[Tam];
	int num_alunos;
	  };
	
struct lista_alunos a;	//definição da variavel

int op;

int main(){
	a.num_alunos=0;
	
  do{
	printf("------------------------------------------------------");
	printf("\n1. INCLUIR ALUNO\n2. LISTAR TODOS\n5.SAIR\nQual opcao? ");  
	scanf("%d",&op);
	switch (op){
	  case 1:	
	    printf("Digite Codigo ");	
	    scanf("%d",&a.vet[a.num_alunos].codigo);
	    printf("Digite Nome ");	
	    scanf(" %[^\n]s",a.vet[a.num_alunos].nome);
	    printf("Digite Nota 1 ");	
	    scanf("%f",&a.vet[a.num_alunos].nota1);
	    printf("Digite Nota 2 ");	
	    scanf("%f",&a.vet[a.num_alunos].nota2);
	    a.num_alunos++;//atualiza o numero de alunos
	    break;
      case 2:
        for(int i=0; i<a.num_alunos;i++){
	      printf("Cod: %d\tNome: %s\tMedia:%.2f\n",a.vet[i].codigo,a.vet[i].nome,(a.vet[i].nota1+a.vet[i].nota2)/2);
	    }  
	    break;  
    }  
  }while(op != 5);
}