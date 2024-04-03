#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j = 0,k = 0, vet[6] ,par[6], impar[6];

	for (i=0; i<6; i++) {
		printf("Digite valores para o vetor [%d] = ",i);
		scanf("%d", &vet[i]);
	}
	for (i=0; i<6; i++) {
		if (vet[i] % 2 == 0) {
			par[k] = vet[i];
			k++;
		}
		else {
			impar[j] = vet[i];
			j++;
		}
	}
	printf("Todos os números pares: ");
	for (i = 0; i < k; ++i)
	{
		printf("%d ", par[i]);
	}
	printf("\nA quantidade de números pares : %d\n", k);
	printf("\n\nTodos os números ímpares: ");
	for (i = 0; i < j; ++i)
	{
		printf("%d ", impar[i]);
	}
	printf("\nA quantidade de números ímpares : %d\n", j);

	system("pause");
	return 0;
}