#include <stdio.h>
#include <stdlib.h>
	
int main() {
	int i, vet[5], cod;

	for (i=0; i<=4; i++) {
		printf("Digite um valor para o vetor [%d]: ", i);
		scanf("%d", &vet[i]);
	}

	printf("Escolha uma das opções | 0 -Sair | 1 - Vetor na ordem direta| 2 - Ordem inversa : ");
	scanf("%d", &cod);

	if (cod == 1) {
		for(i=0; i<=4; i++) {
			printf("Vetor [%d] = %d\n", i, vet[i]);
		}
	}
	else if (cod == 2) {
		for (i=4; i>=0; i--) {
			printf("\nVetor [%d] = %d\n", i, vet[i]);
		}
	}
	else if (cod == 0) {
		system("pause");
	}
	else if (cod > 2 && cod < 0) {
		printf("Código inválido..");
	}

	system("pause");
	return 0;
}