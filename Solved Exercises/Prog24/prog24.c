#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i, vet1[15], vet2[10], vet3[25], k; // vet1 = Alunos que fazem lógica vet2 = Alunos que fazem linguagem de programação

	for(i=0; i<15; i++)
	{
		printf("Digite a matrícula do aluno que faz lógica #%d : ", i);
		scanf("%d", &vet1[i]);
	}

	for(i=0; i<10; i++)
	{
		printf("Digite a matrícula do aluno que faz Linguagem de programação #%d : ", i);
		scanf("%d", &vet2[i]);
	}
	printf("\nAlunos Matriculados: Lógica e linguagem de programação\n");
	for (i = 0; i < 15; i++)
	{
		vet3[i] = vet1[i];
	}
	k =0;
	for (i = 15; i < 25; i++)
	{
		vet3[i] = vet2[k];
		k++;
	}

	for(i=0; i<25; i++) 
	{
		printf("Aluno #%d --> Matrícula #%d  \n", i, vet3[i]);
	}
	system("pause");
	return 0;
}