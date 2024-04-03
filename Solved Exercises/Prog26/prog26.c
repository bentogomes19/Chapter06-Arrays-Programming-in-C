#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, j = 0, k = 0;
	int vet[5], neg[5], pos[5], soma_pos = 0;


	for (i=0; i<5; i++) 
	{
		printf("Digite valores para o vetor[%d] = ", i);
		scanf("%d", &vet[i]);
	}

	for (i=0; i<5; i++)
	{
		if (vet[i] < 0) 
		{
			neg[k] = vet[i];
			k++;
		}
		if (vet[i] >= 0)
		{
			pos[i] = vet[i];
			j++;
		}
	}

	for(i=0; i<j; i++) 
	{
		soma_pos += pos[i];
	}


	printf("\nNumeros negativos : ");
	for(i=0; i<k; i++)
	{
		printf("%d ", neg[i]);
	}

	printf("\nQuantidade de números negativos = %d\n\n", k);

	printf("Soma dos números positvos = %d\n\n", soma_pos);





	system("pause");
	return 0;
}