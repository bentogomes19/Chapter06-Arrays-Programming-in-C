#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, cont_p = 0, cont_neg = 0;
	float n[8], n_pos[8], n_neg[8];

	for(i=0; i<=7; i++) {
		printf("Digite os valores inteiros para o vetor [%d] : ", i);
		scanf("%f", &n[i]);

		if (n[i] >= 0) {
			n_pos[cont_p] = n[i];
			cont_p++;
		}
		else {
			n_neg[cont_neg] = n[i];
			cont_neg++;
		}
	}

	printf("Vetor com números positivos: ");

	for(i=0; i<= cont_p-1; i++) {
		printf("%.2f ", n_pos[i]);
	}

	printf("Vetor com números negativos: ");
	for (i=0; i<=cont_neg-1; i++) {
		printf("%.2f ", n_neg[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}