#include <stdio.h>

void imprime_tabela(float t[30][12], int a, int m);
void calcula_medias_mensais(float t[30][12], float mm[12], int a, int m);
void calcula_medias_anuais(float t[30][12], float ma[30], int a, int m);

int main()
{
	float tabela[30][12];	//30 anos com 12 meses
	float medias_mensais[12];	//média de cada mês
	float medias_anuais[30];	//média de cada ano
	int a, m;		//anos e meses

	for (a = 0; a < 30; a++) {
		for (m = 0; m < 12; m++) {
			scanf("%f", &tabela[a][m]);
		}
	}

	imprime_tabela(tabela, a, m);
	calcula_medias_mensais(tabela, medias_mensais, a, m);
	calcula_medias_anuais(tabela, medias_anuais, a, m);

	printf("\n");
	for (m = 0; m < 12; m++) {
		printf("%d: %.1f\n", m + 1, medias_mensais[m]);
	}

	printf("\n");
	for (a = 0; a < 30; a++) {
		printf("%d: %.1f\n", a + 1971, medias_anuais[a]);
	}
	return 0;
}

void calcula_medias_anuais(float t[30][12], float ma[30], int a, int m)
{
	int i, j;
	float soma;

	for (i = 0; i < a; i++) {
		soma = 0.0;
		for (j = 0; j < m; j++) {
			soma += t[i][j];

		}
		ma[i] = soma / m;
	}
}

void calcula_medias_mensais(float t[30][12], float mm[12], int a, int m)
{
	int i, j;
	float soma;

	for (i = 0; i < m; i++) {
		soma = 0.0;
		for (j = 0; j < a; j++) {
			soma += t[j][i];

		}
		mm[i] = soma / a;
	}
}

void imprime_tabela(float t[30][12], int a, int m)
{
	int i, j;

	printf
	    (" Ano\t Jan\t Fev\t Mar\t Abr\t Mai\t Jun\t Jul\t Ago\t Set\t Out\t Nov\t Dez\n");
	for (i = 0; i < a; i++) {
		printf("%d\t", i + 1971);
		for (j = 0; j < m; j++) {
			printf("%.1f\t", t[i][j]);
		}
		printf("\n");
	}
}