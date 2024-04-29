//Kauê Bilhalva Bosel

//tive mt problema com essa prova por conta da IDE, devia ter visto no usuário prova antes kkkkkk
#include <stdio.h>

void calcula_medias_mensais(float t[30][12], float mm[12], int a, int m);

int main()
{
    float tabela[30][12]; //30 anos com 12 meses
    float medias_mensais[12]; //media de cada mês
    int a,m; //anos e meses

    for (a = 0; a < 30; a++)
    {
        for ( m = 0; m < 12; m++)
        {
            scanf("%f", &tabela[a][m]);
        }
    }

    calcula_medias_mensais(&tabela[0][0],&medias_mensais[0], a, m);

    for (m=0; m < 12; m++)
    {
        printf("%d: %.1f\n", m+1, medias_mensais[m]);
    }
    return 0;
}

void calcula_medias_mensais(float t[30][12], float mm[12], int a, int m){
    
    int i=0,j=0;

    *ponteiro_medias_mensais = medias_mensais; //pega o endereço de medias mensais para substituir 
                                               //a variável real, já que a função não retorna valor
                                    
	for( int i=0;i < 30; i++)
	{
		for(int j=0; j< 12; j++)
		{	
		ponteiro_tabela[i][j] = &tabela[i][j];      //aqui eu queria botar o endereço da variável pro ponteiro para acessar o valor da 
		}
	}										         //variável que tá na função main dentro da função calcula_medias_mensais                           

    printf("Digite ano e depois mês");  
    scanf("%d%d",&a,&m);     

    for(i = 0; i < 30; i++)
    {
        for(j = 0; j < 12; j++)     
        {
            t[i][j] = tabela[i][j]; //aqui eu queria acessar o endereço de memória da tabela pra por ela dentro do escopo
        }
    }
    
    for (int z = 0; z < m; z++)
    {
        *ponteiro_medias_mensais = t[a][m]; //aqui eu queria por o conteudo da matriz t dentro do medias_mensais fora do escopo da função												
    }										//pra modificar o valor sem return
}