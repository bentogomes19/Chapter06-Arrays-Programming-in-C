#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, k;
	char nome[6][22], situacao[6][10];
	float n1[6], n2[6], media[6], soma_media = 0, media_classe, soma_aprovados = 0, soma_reprovados = 0;
	float reprovados, aprovados;

	for (i=0; i<6; i++)
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
		soma_media += media[i];
		if (media[i] >= 5)
		{
			strcpy(situacao[i], "Aprovado");
			soma_aprovados++;
		}
		else 
		{
			strcpy(situacao[i], "Reprovado");
			soma_reprovados++;
		}
	}

		printf("\nAluno\t\tProva 1\tProva 2\tMédia\tSituação\n");

	for(i=0; i<6; i++)
	{
		printf("%s\t\t%.2f\t%.2f\t%.2f\t%s", nome[i], n1[i], n2[i], media[i], situacao[i]);
		printf("\n");
	}

	media_classe = soma_media / 6;
	aprovados = soma_aprovados / 6 * 100;
	reprovados = soma_reprovados / 6 * 100;

	printf("Média da classe = %.2f\n", media_classe);
	printf("Percentual de Alunos Aprovados = %.2f %%\n", aprovados);
	printf("Percentual de alunos Reprovados = %.2f %%\n", reprovados);




	system("pause");
	return 0;
}