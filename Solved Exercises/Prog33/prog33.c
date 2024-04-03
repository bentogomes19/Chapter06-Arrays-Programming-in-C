#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, k = 0, r = 0;
	char nome[3][22], situacao[3][10];
	float n1[3], n2[3], media[3];

	for (i=0; i<3; i++)
	{
		printf("Digite o nome do %d° Aluno: ", i+1);
		fflush(stdin);
		fgets(nome[i], 22, stdin);
		nome[i][strcspn(nome[i], "\n")] = '\0'; // remove o \n

		printf("%s --> Digite a sua primeira nota: ", nome[i]);
		scanf(" %f", &n1[i]);

		printf("%s --> Digite a sua segunda nota: ", nome[i]);
		scanf(" %f", &n2[i]);

		media[i] = (n1[i] + n2[i]) / 2;
		if (media[i] >= 5)
		{
			strcpy(situacao[k], "Aprovado");
			k++;
		}
		else 
		{
			strcpy(situacao[r], "Reprovado");
			r++;
		}
	}

	printf("\nAluno\t  Prova 1\t  Prova 2\t  Média\t  Situação\n");

	for(i=0; i<3; i++)
	{
		printf("%s  \t    %.2f \t   %.2f  \t   %.2f  ", nome[i], n1[i], n2[i], media[i]);
		printf("\n");
	}



	system("pause");
	return 0;
}