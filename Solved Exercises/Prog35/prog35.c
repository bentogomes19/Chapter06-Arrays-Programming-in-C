#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{	
	char nome[5][22], nome_vet1[5][22];
	int i, k = 0, j =0;
	float preco[5], soma_preco = 0, media;

	for (i=0; i<5; i++)
	{

		printf("Digite o nome do %d° Produto: ", i+1);
		fflush(stdin);
		fgets(nome[i], 22, stdin);

		printf("Digite o valor do %d° Produto: ", i+1);
		scanf(" %f", &preco[i]);

		if (preco[i] < 50) 
		{
			k++;
		}
		else if (preco[i] >= 50 && preco[i] <= 100)
		{
			strcpy(nome_vet1[j], nome[i]);
			j++;
		}
		else if (preco[i] > 100) 
		{
			soma_preco += preco[i];
		}

		printf("\n\n");

	}

	media = soma_preco / 5;
	printf("A quantidade de produtos com preço inferior a R$ 50,00 = %d\n", k);

	printf("O nome dos produtos com preço entre R$ 50,00 e R$ 100,00\n");
	for(i=0; i<j; i++)
	{
		printf("%s\n", nome_vet1[i]);
	}

	printf("A média dos preços dos produtos com preço superior a R$ 100,00 = %.2f\n", media);

	system("pause");
	return 0;
}