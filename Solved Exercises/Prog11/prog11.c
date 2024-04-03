#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, vet[6], qtd_impar = 0, par, soma_par = 0, impar;	

	for(i=0; i<=5; i++) {
		printf("Digite um valor para o vetor[%d]: ", i);
		scanf("%d", &vet[i]);
	}
	printf("\nRelatório\n");
	for(i=0; i<=5; i++) {
		if (vet[i] % 2 == 0) {
			par = vet[i];
			soma_par += vet[i];
			printf("O número %d é par na posição %d\n", par, i);
		}
		else {
			impar = vet[i];
			qtd_impar++;
			printf("o Número %d é impar na posição %d\n", impar, i);
		}

	}
	printf("Soma dos números pares: %d\n", soma_par);
	printf("A quantidade de números ímpares é de : %d\n", qtd_impar);


	system("pause");
	return 0;
}