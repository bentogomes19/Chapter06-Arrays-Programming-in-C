#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main() 
{
	int i, j, vendas[3], comissao[3];
	char nomes[3][22], *maior_nome, *menor_nome;
	float vlr_comissao[3], maior = 0, menor = 999999999;

	for (i=0; i<3; i++) 
	{
		printf("Vendedor %d --> Digite o total de vendas : ", i+1);
		scanf("%d", &vendas[i]);

		printf("Vendedor %d --> Digite o percentual de comissão %%: ", i+1);
		scanf("%d", &comissao[i]);

		printf("Vendedor %d --> Digite o seu nome: ", i+1);
		fflush(stdin);
		fgets(nomes[i], 22, stdin);

		printf("\n");

	}
	// Relatório com os nomes dos vendedores e os valores a receber referente à comissão

	for(i=0; i<3; i++)
	{
		vlr_comissao[i] = (float)vendas[i] * ((float)comissao[i] / 100);
	}
	printf("\nRelatório\n\n");
	for(i=0; i<3; i++) 
	{
		printf("\n\nVendedor: %s  ", nomes[i]);
		printf("Total de vendas : %d  Comissão A receber --> R$ %.2f\n", vendas[i], vlr_comissao[i]);
	}

	for (i=0; i<3; i++) 
	{

		if (vlr_comissao[i] > maior)
		{
			maior = vlr_comissao[i];
			maior_nome = nomes[i];
		}
		if (vlr_comissao[i] < menor)
		{
			menor = vlr_comissao[i];
			menor_nome = nomes[i];
		}

	}

	printf("\n\nVendedor: %s Maior comissão a receber --> R$ %.2f\n", maior_nome, maior);
	printf("Vendedor: %s Menor comissão a receber --> R$ %.2f\n", menor_nome, menor);

	system("pause");
	return 0;
}