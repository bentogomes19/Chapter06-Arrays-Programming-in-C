#include <stdlib.h>
#include <stdio.h>

int main()
{
	char nome[10][22];
	int i, cod[10];
	float preco[10], aumento[10];

	for (i=0; i<10; i++)
	{
		printf("Produto %d --> Digite o nome do produto: ", i+1);
		fflush(stdin);
		fgets(nome[i], 22, stdin);

		printf("Produto %d --> Digite o código do produto: ", i+1);
		scanf("%d", &cod[i]);

		printf("Produto %d --> Digite o preço do produto R$: ", i+1);
		scanf("%f", &preco[i]);
		printf("\n\n");
	}

	for (i=0; i<10; i++) 
	{
		if (cod[i] % 2 == 0 && preco[i] > 1000)
		{
			aumento[i] = (0.2 * preco[i]) + preco[i];
		}
		else
		{
			aumento[i] = 0;
		}

		if (cod[i] % 2 == 0) 
		{
			aumento[i] = (0.15 * preco[i]) + preco[i];
		}
		if (preco[i] > 1000)
		{
			aumento[i] = (0.1 * preco[i]) + preco[i];
		}

		printf("Prduto %s", nome[i]);
		printf("Código #%d\n", cod[i]);
		printf("Preço R$ %.2f\n", preco[i]);
		printf("-------------------\n");
		printf("Novo preço R$ %.2f\n\n", aumento[i]);
	}

	system("pause");
	return 0;
}