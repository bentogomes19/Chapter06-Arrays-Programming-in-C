#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, vet[15], pos_maior = 0, maior =0, pos_menor = 0, menor = 999999;

	for(i=0; i<15; i++)
	{
		printf("Digite um número para o vetor [%d] = ", i);
		scanf("%d", &vet[i]);
	}

	for (i=0; i<15; i++)
	{
		if (vet[i] > maior)
		{
			maior = vet[i];
			pos_maior = i;
		}

	}

	for (i=0; i<15; i++)
	{
		if (vet[i] < menor)
		{
			menor = vet[i];
			pos_menor = i;
		}

	}



	printf("O maior número %d posição no vetor [] = %d\n", maior , pos_maior);
	printf("O menor número %d posição no vetor [] = %d\n", menor, pos_menor);


	system("pause");
	return 0;
}