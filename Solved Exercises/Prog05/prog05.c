#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, aux, x[10], vet[10];

	for (i=0; i<=9; i++) {
		printf("Digite um valor para o vetor x[%d]: ", i);
		scanf("%d", &x[i]);
	}
	// ordem decrescente
	for (i=0; i<=9; i++) {
		for (j=0; j<=8; j++) {
			if (x[j] < x[j+1]) {
				aux = x[j];
				x[j] = x[j+1];
				x[j+1] = aux;
			}
		}
	}

	printf("vetor x[] = ");
	for(i=0; i<=9; i++) {
		printf("%d ", x[i]);
	}


	printf("\n");
	system("pause");
	return 0;
}