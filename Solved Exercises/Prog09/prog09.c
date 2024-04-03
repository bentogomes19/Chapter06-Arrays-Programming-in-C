#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char modelo[5][25];
	float consumo[5], menor, maior, menor_modelo, maior_modelo;
	int i;

	for (i=0; i<=4; i++) {
		printf("Informe o modelo do carro: ");
		fflush(stdin);
		fgets(modelo[i], 25, stdin);
	}

	for(i=0; i<=4; i++) {
		printf("Informe o consumo do %s: ", modelo[i]);
		scanf(" %f", &consumo[i]);
		if (i==0) {
			menor = consumo[i];
			menor_modelo = i;

		}
		else if (consumo[i] < menor) {
			menor = consumo[i];
			menor_modelo = i;
		}

	}

	printf("O o veículo  mais econômico, com %.2f Km/l de comsumo\n", menor);

	system("pause");
	return 0;
}