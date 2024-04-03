#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, x[5], y[5], xy[10], aux;

	for(i=0; i<=4; i++) {
		printf("Digite um valor para o vetor x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for (i=0; i<=4; i++) {
		printf("\nDigite um valor para o vetor y[%d] : ", i);
		scanf("%d", &y[i]);
	}

	// Vetor x em ordem crescente
	for(i=0; i<=4; i++) {
		for(j=0; j<=3; j++) {
			if (x[j] > x[j+1]) {
				aux = x[j];
				x[j] = x[j+1];
				x[j+1] = aux;
			}
		}
	}

	printf("Vetor x[] em ordem crescente: ");
	for(i=0; i<=4; i++) {
		printf(" %d ", x[i]);
	}

	// vetor y em ordem crescente
	for (i=0; i<=4; i++) {
		for(j=0; j<=3; j++) {
			if (y[j] > y[j+1]) {
				aux = y[j];
				y[j] = y[j+1];
				y[j+1] = aux;
			}
		}
	}

	printf("Vetor y[] em ordem crescente: ");
	for(i=0; i<=4; i++) {
		printf(" %d ", y[i]);
	}

	j =0;
	for (i=0; i<=4; i++) {
		xy[j] = x[i];
		j++;
		xy[j] = y[i];
		j++;
	}
	// colocando o vetor xy em ordem crescente
	for (i=0;i<=9; i++) {
		for(j=0; j<=8; j++) {
			if (xy[j] >  xy[j+1]) {
				aux = xy[j];
				xy[j] = xy[j+1];
				xy[j+1] = aux;
			}
		}
	}

	printf("\nVetor xy[] = ");
	for (i=0; i<=9; i++) {
		printf("%d ", xy[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}