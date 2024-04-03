#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i, j, k = 0, l = 10, vet1[10], vet2[10], vet3[20], aux;

	for (i=0; i<10; i++)
	{
		printf("Digite um valor para o vetor 1 [%d] : ", i);
		scanf("%d", &vet1[i]);
		vet3[k] = vet1[i];
		k++;
	}	

	for (i=0; i<10; i++)
	{
		printf("Digite um valor para o vetor 2 [%d] : ", i);
		scanf("%d", &vet2[i]);
		vet3[l] = vet2[i];
		l++;
	}	


	printf("Vetor 3 [] = ");
	for (i=0; i<20; i++)
	{
		printf("%d ", vet3[i]);
	}

	for(i=0; i<20-1; i++)
	{
		for(j=0; j<20; j++) // bubble sort
		{
			if (vet3[j] < vet3[j+1])
			{
				aux = vet3[j];
				vet3[j] = vet3[j+1];
				vet3[j+1] = aux;
			}
		}
	}
	printf("Vetor em ordem decrescente = ");
	for (i=0; i<20; i++)		
	{
		printf("%d ", vet3[i]);
	}


	system("pause");
	return 0;
}