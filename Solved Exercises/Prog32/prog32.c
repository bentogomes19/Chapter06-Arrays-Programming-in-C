#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() 
{

	char nome[8][22];
	float nota[8];
	int i;

	for(i=0; i<8; i++) 
	{
		printf("Digite o nome do %d° Alunos: ", i+1);
		fflush(stdin);
		fgets(nome[i],22, stdin);
		nome[i][strcspn(nome[i], "\n")] = '\0';

		printf("Digite a nota do %s: ", nome[i]);
		scanf(" %f", &nota[i]);
	}

	printf("Relatório de Notas\n");

	for(i=0; i<8; i++)
	{
		printf("%s --> %.2f\n", nome[i], nota[i]);
	}


	system("pause");
	return 0;
}