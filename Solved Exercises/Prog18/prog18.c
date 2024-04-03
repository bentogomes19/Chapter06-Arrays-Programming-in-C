#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, a[10], repetidos[10], vezes[10], cont =0 , qtde;

	for (i=0; i < 10; i++) {
		printf("Digite um valor para o vetor A[%d]: ", i);
		scanf("%d", &a[i]);
	}
	k = 0;
	for(i=0; i < 10; i++) {
		qtde = 0;
		for (j=0; j<10; j++) {
			if (i != j) {
				if (a[i] = a[j] ) {
					qtde ++;
				}
			}	
			if (qtde > 1) {
				cont =0;
				while (cont < k && a[i] != repetidos[cont]) {
					cont++;
				}
				if (cont = k) {
					repetidos[k] = a[i];
					vezes[k] = qtde;
					k++;
				}
			}
		}

	}

	for(i=0; i<=k-1; i++) {
		printf("O número %d apareceu %d vezes\n", repetidos[i], vezes[i]);
	}

	system("pause");
	return 0;
}