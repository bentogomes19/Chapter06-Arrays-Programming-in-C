#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, k = 0, vet[10], vet_pos[10];

	for(i=0; i<10; i++)
	{
		printf("Digite um valor para o vetor [%d] : ", i);
		scanf("%d", &vet[i]);

		if (vet[i] >= 0)
		{
			vet_pos[i] = vet[i];
			k++;
		}
	}

	printf("Vetor com os números positivos = ");
	for(i=0; i<k; i++)
	{	
		printf("%d ", vet_pos[i]);
	}


	system("pause");
	return 0;
}