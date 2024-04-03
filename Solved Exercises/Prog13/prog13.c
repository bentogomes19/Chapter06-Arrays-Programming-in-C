#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	int i, j, aux;
	char a[20], b[20];

	for (i=0; i<=19; i++) {
		printf("Digite valores para o vetor a[%d] : ", i);
		fflush(stdin);
		scanf(" %c", &a[i]);

	}

	printf("Valores do vetor A : ");
	for (i=0; i<=19; i++) {
		printf("%c ", a[i]);
	}

	printf("\n");
	for (i=0; i<=19; i++) {
		printf("Digite valores para o vetor b[%d] : ", i);
		fflush(stdin);
		scanf(" %c", &b[i]);

	}

	printf("Valores do vetor B : ");
	for (i=0; i<=19; i++) {
		printf("%c ", b[i]);
	}

	j = 19;
	// mudar um elemento dentro de um vetor
	for (i=0; i<=19; i++) {
		aux = a[i];
		a[i] = b[j];
		b[j] = aux;
		j--;
	}


	printf("Valores do vetor A : ");
	for (i=0; i<=19; i++) {
		printf("%c ", a[i]);
	}

	printf("Valores do vetor B : ");
	for (i=0; i<=19; i++) {
		printf("%c ", b[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}