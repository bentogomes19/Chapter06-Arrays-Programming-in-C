#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, vet[15], k = 0, pos, vet2[15],j;

	for(i=0; i<15; i++) 
	{
		printf("Digite um valor para o vetor[%d] = ", i);
		scanf("%d", &vet[i]);
	}

	j = 0;
	for (i=0; i<15; i++)
	{
		if (vet[i] == 30) 
		{
			pos = i;
			vet2[j] = pos;
			j++;
		}
	}

	for ( i = 0; i < 15; ++i)
	{
		printf("%d ", vet[i]);
	}
	printf("\nPosições em que o 30 aparece\n");
	for (i=0; i<j; i++) 
	{
		printf("%d ", vet2[i]);
	}

	system("pause");
	return 0;
}