#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, vet1[10], vet2[10], vet3[20];
	j = 0;
	for (i=0; i<=9; i++) {
		printf("Digite um número para o vetor 1  [%d] : ", i);
		scanf("%d", &vet1[i]);
		vet3[j] = vet1[i];
		j++;
	}
	for (i=0; i<=9; i++) {
		printf("\nDigite um número para o vetor 2  [%d] : ", i);
		scanf("%d", &vet2[i]);
		vet3[j] = vet2[i];
		j++;

	}

		printf("Intercalação entre os vetores: ");
		for (i=0; i<=19; i++) {
			printf("%d ", vet3[i]);
		}

	printf("\n\n");
	system("pause");
	return 0;
}