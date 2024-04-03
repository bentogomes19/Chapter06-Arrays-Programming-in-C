#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, vet1[15], p[5], imp[5], j, poslivre_i, poslivre_p;

	for (i=0; i<=14; i++) {
		printf("Digite um valor para vetor [%d] = ", i);
		scanf("%d", &vet1[i]);

	}
	poslivre_p = 0;
	poslivre_i = 0;
	for (i=0; i<=14; i++) {
		if (vet1[i] % 2 == 0) {
			p[poslivre_p] = vet1[i];
			poslivre_p++;
			

		}
		else {
			imp[poslivre_i] = vet1[i];
			poslivre_i++;
		}

		if (poslivre_p = 6) {
			printf("Vetor de pares cheio\n");
			for (j=0; j<=(poslivre_i - 1); j++) {
				printf("Vetor par[%d] = %d\n", j, p[j]);
			}
			poslivre_p = 0;
		}
		if (poslivre_i = 6) {
			printf("Vetor de impares cheio\n");
			for (j=0; j<=(poslivre_i-1); j++) {
				printf("Vetor par[%d] = %d\n", j, imp[j]);
			}
			poslivre_i = 0;
		}
	}
	system("pause");
	return 0;
}