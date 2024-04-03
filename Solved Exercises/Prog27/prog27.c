#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() 
{
	char alunos[7][22], maior_aluno[22], rec_alunos[7][22];
	int i, n = 0;
	float media[7], recuperar_nota[7], maior = 0, menor = 999999;

	for(i=0; i<7; i++) 
	{
		printf("Aluno %d --> Digite o seu nome: ", i+1);
		fflush(stdin);
		fgets(alunos[i], 22 , stdin);

		printf("\n%s\n", alunos[i]);
		printf("Digite a sua média final : ");
		scanf("%f", &media[i]);

	}

	for (i=0; i<7; i++)
	{
		if (media[i] > maior) 
		{
			maior = media[i];
			strcpy(maior_aluno, alunos[i]);
		}
		if (media[i] < menor) 
		{
			menor = media[i];
		}
		if (media[i] < 7)
		{
			strcpy(rec_alunos[n], alunos[i]);
			recuperar_nota[n] = ((7 - media[i]) + 7);
			n++;
		}
	}

	printf("Aluno %s --> Tem a maior média: %.2f\n", maior_aluno, maior);

	for(i=0; i<n; i++) 
	{
		printf(" %s  ", rec_alunos[i]);
		printf("Você precisa tirar %.2f no exame final para ficar com média igual a 5\n\n", recuperar_nota[i]);
	}


	system("pause");
	return 0;
}