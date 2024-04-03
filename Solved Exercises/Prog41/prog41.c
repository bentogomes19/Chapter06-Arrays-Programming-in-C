#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, k = 0, veta[10], vetb[10];


	for(i=0; i<10; i++)
	{
		printf("Digite os valores para o vetor A [%d] = ", i);
		scanf("%d", &veta[i]);

		if (veta[i] > 0)
		{
			vetb[k] = veta[i];
			k++;
		}

	}
	printf("Vetor B = ");
	for(i=0; i<k; i++)
	{
		printf("%d ", vetb[i]);
	}

	system("pause");
	return 0;
}