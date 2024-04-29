/*Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se
ter os seguintes dados:
• Nome
• E-mail
• Enderec¸o (contendo campos para Rua, numero, complemento, bairro, cep, cidade, ´
estado, pa´ıs).
• Telefone (contendo campo para DDD e numero) ´
• Data de aniversario (contendo campo para dia, m ´ es, ano). ˆ
• Observac¸oes: Uma linha (string) para alguma observac¸ ˜ ao especial. ˜
(a) Definir a estrutura acima.
(b) Declarar a variavel agenda (vetor) com capacidade de agendar at ´ e 100 nomes. ´
(c) Definir um bloco de instruc¸oes busca por primeiro nome: Imprime os dados da ˜
pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
(d) Definir um bloco de instruc¸oes busca por m ˜ es de anivers ˆ ario: Imprime os dados de ´
todas as pessoas que fazem aniversario nesse m ´ es. ˆ
(e) Definir um bloco de instruc¸oes busca por dia e m ˜ es de anivers ˆ ario: Imprime os ´
dados de todas as pessoas que fazem aniversario nesse dia e m ´ es. ˆ
(f) Definir um bloco de instruc¸oes insere pessoa: Insere por ordem alfab ˜ etica de nome. ´
(g) Definir um bloco de instruc¸oes retira pessoa: Retira todos os dados dessa pessoa e ˜
desloca todos os elementos seguintes do vetor para a posic¸ao anterior. ˜
(h) Definir um bloco de instruc¸oes imprime agenda com as opc¸ ˜ oes: ˜
• Imprime nome, telefone e e-mail.
• Imprime todos os dados.
(i) O programa deve ter um menu principal oferecendo as opc¸oes acima.*/

#include <stdio.h>

struct agendaTelefone{
    char nome[50];
    char email[100];
    int dia,mês,ano;
    int ddd,telefone;
    char rua[100], numero[100], complemento[100], bairro[100], cep[100], cidade[100], estado[100], pais[100];
    char observacao[100];
};

int inserirPessoa(int x, int y);
int imprimirPessoa(int a, int b);

int main(){

    struct agendaTelefone Agenda[100];
    int menu,menuImprimir;

    printf("O que deseja fazer? 1.Inserir pessoa 2.Retirar Pessoa 3.Imprimir Pessoa 4.Busca por mês?");
    printf("5.Busca por dia e mês 6.Busca por primeiro nome\n");

    scanf("%d",&menu);
    if(menu==3){
        printf("Como deseja imprimir? 1.Tudo 2.nome,telefone e email\n");
        scanf("%d",&menuImprimir);

        if(menuImprimir==1){
        printf("nome:%d email:%d endereço:%d telefone:%d data de aniversário:%d\n", );
        }
    }



}

int inserirPessoa(int x, int y){

}

int imprimirPessoa(int a, int b){
    printf("Qual");
}