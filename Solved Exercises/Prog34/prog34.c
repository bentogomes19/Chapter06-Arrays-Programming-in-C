#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome[8][22];
	int i, locacao_gratis;
	int locacao[8];

	for (i=0; i<8; i++)
	{
		printf("Cliente %d --> Digite o seu nome: ", i+1);
		fflush(stdin);
		fgets(nome[i], 22, stdin);

		printf("Cliente %d --> Digite a quantidade de DVDs locados: ", i+1);
		scanf("%d", &locacao[i]);


		if (locacao[i] >= 10)
		{
			locacao_gratis = locacao[i] / 10;
			printf("O cliente tem direito a %d locações grátis\n", locacao_gratis);
		}
		else
		{
			printf("O cliente não tem direito a locação gratis\n");
		}
		printf("\n\n");

	}

	system("pause");
	return 0;
}