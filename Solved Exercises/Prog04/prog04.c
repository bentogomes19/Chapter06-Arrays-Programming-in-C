#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, x[10], y[10], uniao[10], dif[10], soma[10], produto[10], intersec[10], cont_u;
	int cont_d, cont_i;

	for (i=0; i<=9; i++) {
		printf("Digite valores para o vetor x[%d]: ", i);
		scanf("%d", &x[i]);
	}

	printf("\n\n");

	for (i=0; i<=9; i++) {
		printf("Digite valores para o vetor y[%d]: ", i);
		scanf("%d", &y[i]);
	}
	printf("Vetor x[] = ");
	for (i=0; i<=9; i++) {
		printf("%d ", x[i]);
	}
	printf("\nVetor x[] = ");
	for (i=0; i<=9; i++) {
		printf("%d ", y[i]);
	}

	cont_u = 0; //contador da união
	cont_d = 0; // contador da diferença
	cont_i = 0;
	//loop para uniao dos valores de x sem que eles se repitam
	for (i=0; i<=9; i++) {
		j=0;
		while (j < cont_u && x[i] != uniao[j]) {
			j++;
		}
		if (j>=cont_u) {
			uniao[cont_u] = x[i];
			cont_u++;
		}

	}

	for (i=0; i<=9; i++) {
		j=0;
		while (j<cont_u && y[i] != uniao[j]) {
			j++;
		}
		if (j>=cont_u) {
			uniao[cont_u] = y[i];
			cont_u++;
		}
	}
	printf("\nUnião>: ");
	for(i=0; i<=cont_u-1; i++) {
		printf("%d ", uniao[i]);
	}
	for(i=0; i<=9; i++) {
		j=0;
		while (x[i] != y[j] && j <= 10) {
			j++;
		}
		if (j > 9) {
			k=0;
			while (k< cont_d && x[i] != dif[k]) {
				k++;
			}
			if (k>= cont_d) {
				dif[cont_d] = x[i];
				cont_d++;
			}
		}
	}
	printf("\nDiferença>: ");
	for (i=0; i<= cont_d-1; i++) {
		printf(" %d ", dif[i]);
	}
	for (i=0; i<=9; i++) {
		soma[i] = y[i] + x[i];
		produto[i] = x[i] * y[i];
	}
	printf("\nSoma entre os vetores X e Y : ");
	for (i=0; i<=9; i++) {
		printf("%d ", soma[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}