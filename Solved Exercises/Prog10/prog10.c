#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char nome[5][22];
	float salario[5], aumento;
	int i, tempo[5];

	for (i=0; i<=4; i++) {
		printf("\nFuncionário %d --> Digite o seu nome: ",i+1);
		fflush(stdin);
		fgets(nome[i], 22, stdin);

		printf("Funcionário %d --> Informe o seu salário R$: ", i+1);
		scanf(" %f", &salario[i]);

		printf("Funcionário %d --> Informe o seu tempo de serviço : ", i+1);
		scanf(" %d", &tempo[i]);
	}

	for (i=0; i<=4; i++) {
		if (tempo[i] <=5 && salario[i] >= 800) {
			printf("Nome: %s\n", nome[i]);
		}
	}

	for (i=0; i<=4; i++) {
		if (tempo[i] > 5 || salario[i] < 800) {

			if (tempo[i] > 5 && salario[i] < 800) {
			aumento = (0.35 * salario[i]) + salario[i];
			printf("Funcionário %s   : Salário de R$ %.2f\n", nome[i], salario[i]);

			}
			else if (tempo[i] > 5) {
				aumento = (0.25 * salario[i]) + salario[i];
			}
			else {
				aumento = (0.15 * salario[i]) + salario[i];
			}
			printf("%s \n", nome[i]);
			printf("Salário : R$ %.2f\n\n", aumento);
		}

	}


	system("pause");
	return 0;
}