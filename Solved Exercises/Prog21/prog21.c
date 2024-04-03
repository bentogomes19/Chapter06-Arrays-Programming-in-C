#include <stdlib.h>
#include <stdio.h>

int main() {
	int i, x[7], mult2[7], mult3[7], k, cont2=0, cont3 =0;

	for(i=0; i<7; i++ ){
		printf("Digite um valor para o vetor[%d] = ", i);
		scanf("%d", &x[i]);
	}

	for(i=0; i<7; i++ ){

		if(x[i] % 2 == 0) {
			mult2[cont2] = x[i];
			cont2++;
			k = 0;
		}
		else if (x[i] % 3 == 0) { 
			mult3[cont3] = x[i];
			cont3++;
			k = 0; 
		}
		else if (x[i] % 2 != 0 && x[i] % 3 != 0) {
			k=1;
		}
	}

	if (k == 1) {
		printf("Não há multiplos\n");
	}

	printf("Vetor x = ");
	for(i=0; i<7; i++ ){
		printf("%d ", x[i]);
	}

	printf("\nVetor Mult2 = ");
	for(i=0; i<cont2; i++ ){
		if (mult2[i] != 0) {
			printf("%d ", mult2[i]);
		}
	}

	printf("\nVetor Mult3 = ");
	for(i=0; i<cont3; i++ ){
		if (mult3[i] != 0) {
			printf("%d ", mult3[i]);

		}
	}


	printf("\n");
	system("pause");
	return 0;
}