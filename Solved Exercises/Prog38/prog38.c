#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, vet1[10], vet2[10], mult[10];

	for(i=0; i<10; i++)
	{
		printf("Digite o valor para o vetor 1 [%d] = ", i);
		scanf("%d", &vet1[i]);
	}

	for(i=0; i<10; i++)
	{
		printf("Digite o valor para o vetor 2 [%d] = ", i);
		scanf("%d", &vet2[i]);
	}

	for(i=0; i<10; i++)
	{
		mult[i] = vet1[i] * vet2[i];
	}
	printf("Vetor Multiplicação [] = ");
	for(i=0; i<10; i++)
	{
		printf("%d ", mult[i]);
	}



	system("pause");
	return 0;
}