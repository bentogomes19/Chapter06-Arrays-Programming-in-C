#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k, vet[10], vetpar[10], vetimpar[10];
	j = 0;
	k = 0;


	for (i=0; i<10; i++)  // Coletar os elementos do vetor
	{
		printf("Digite os valores para o vetor[%d] : ", i);
		scanf("%d", &vet[i]);

		if (vet[i] % 2 == 0) // Verificar se o número é par
		{
			vetpar[k] = vet[i];
			k++;
		}
		else 
		{
			vetimpar[j] = vet[i];
			j++;
		}
	}

	printf("\nNúmeros pares: ");
	for (i=0; i<k; i++) // Vetor com números pares
	{
		printf("%d ", vetpar[i]);
	}

	printf("\nNúmeros pares: ");
	for (i=0; i<j; i++) // Vetor com números Ìmparaes
	{
		printf("%d ", vetimpar[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}