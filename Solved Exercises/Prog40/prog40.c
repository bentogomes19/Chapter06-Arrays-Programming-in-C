#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, vet[10], vet2[10], vlr_vet;

	for(i=0; i<10; i++)
	{
		printf("Digite um valor para o vetor [%d] = ", i);
		scanf("%d", &vet[i]);

		if (vet[i] == 0)
		{	
			vlr_vet = 1;
			vet2[i] = vlr_vet;
		}
		else
		{
			vet2[i] = vet[i];
		}
		
	}



	printf("\nVetor 1 [] = ");
	for(i=0; i<10; i++)
	{
		printf("%d ", vet[i]);
	}

	printf("\nVetor 2 [] = ");
	for(i=0; i<10; i++)
	{
		printf("%d ", vet2[i]);
	}


	system("pause");
	return 0;
}