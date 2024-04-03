#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n = 0, k =0, m, vet1[10], vet2[5], vetresult[10], vetresult2[10], somavetor2 = 0, vetpar[10];
	int vetimpar[10];
	int j=0, p =0;

	for(i=0; i<10; i++)
	{
		printf("Digite o valor para o Vetor01[%d] : ", i);
		scanf("%d", &vet1[i]);

		if (vet1[i] % 2 == 0) 
		{
			vetpar[n] = vet1[i];
			n++;
		}
		else 
		{
			vetimpar[k] = vet1[i];
			k++;
		}
	}
	printf("\n\n");

	for(i=0; i<5; i++)
	{
		printf("Digite o valor para o Vetor02[%d] : ", i);
		scanf("%d", &vet2[i]);
		somavetor2 += vet2[i];

	}

	for(i=0; i<k; i++)
	{	m = 0;
		for(j=0; j<5; j++)
		{
			if (vetimpar[i] % vet2[j] == 0)
			{
				m++;
			}
			else
			{
				vetresult2[p] = 0;
			}
		}
		vetresult2[p] = m;
		p++;
	}

	for(i=0; i<n; i++) 
	{
		vetresult[i] = vetpar[i] + somavetor2;
	}

	printf("Primeiro Vetor Resultante : ");
	for(i=0; i<n; i++) 
	{
		printf("%d ", vetresult[i]);
	}


	printf("\nSegundo vetor Resultante : ");
	for(i=0; i<p; i++) 
	{
		printf("%d ", vetresult2[i]);
	}

	printf("\n\n");
	system("pause");
	return 0;
}