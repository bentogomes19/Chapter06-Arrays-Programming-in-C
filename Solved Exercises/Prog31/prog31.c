#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i, vet[5], somavet = 0;

	for(i=0; i<5; i++)
	{
		printf("Digite o %d° Número : ", i);
		scanf("%d", &vet[i]);
		somavet += vet[i];
	}


	printf("Os números digitados fora: ");
	for(i=0; i<5; i++)
	{
		printf("%d ", vet[i]);
		printf("= %d\n", somavet);
	}

	system("pause");
	return 0;
}