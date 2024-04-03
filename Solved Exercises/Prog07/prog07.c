#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, maior_mes, menor_mes;
	float temp[12], maior, menor;


	for(i=0; i<=11; i++) {
		printf("Digite a temperatura média no %d° mês do ano: ", i+1);
		scanf("%f", &temp[i]);
	}

	maior = 0;
	menor = 0;
	maior_mes = 0;
	menor_mes = 0;

	for(i=0; i<=11; i++) {
		if (i==0) {
			maior = temp[i];
			menor = temp[i];
			maior_mes = i;
			menor_mes = i;
		}
		else if (temp[i] > maior) {
			maior = temp[i];
			maior_mes = i;
		}
		if (temp[i] < menor) {
			menor = temp[i];
			menor_mes = i;
		}
	}

	printf("A maior temperatura média registrada foi de %.2f\n", maior);
	printf("A menor temperatura média registrada foi de %.2f\n", menor);

	if (maior_mes == 1) {
		printf("JANEIRO\n");
	}
	if (maior_mes == 2) {
		printf("FEVEREIRO\n");
	}
	if (maior_mes == 3) {
		printf("MARÇO\n");
	}
	if (maior_mes == 4) {
		printf("ABRIL\n");
	}
	if (maior_mes == 5) {
		printf("MAIO\n");
	}
	if (maior_mes == 6) {
		printf("JUNHO\n");
	}
	if (maior_mes == 7) {
		printf("JULHO\n");
	}
	if (maior_mes == 8) {
		printf("AGOSTO\n");
	}
	if (maior_mes == 9) {
		printf("SETEMBRO\n");
	}
	if (maior_mes == 10) {
		printf("OUTUBRO\n");
	}
	if (maior_mes == 11) {
		printf("NOVEMBRO\n");
	}
	if (maior_mes == 12) {
		printf("DEZEMBRO\n");
	}

	if (menor_mes == 1) {
		printf("JANEIRO\n");
	}
	if (menor_mes == 2) {
		printf("FEVEREIRO\n");
	}
	if (menor_mes == 3) {
		printf("MARÇO\n");
	}
	if (menor_mes == 4) {
		printf("ABRIL\n");
	}
	if (menor_mes == 5) {
		printf("MAIO\n");
	}
	if (menor_mes == 6) {
		printf("JUNHO\n");
	}
	if (menor_mes == 7) {
		printf("JULHO\n");
	}
	if (menor_mes == 8) {
		printf("AGOSTO\n");
	}
	if (menor_mes == 9) {
		printf("SETEMBRO\n");
	}
	if (menor_mes == 10) {
		printf("OUTUBRO\n");
	}
	if (menor_mes == 11) {
		printf("NOVEMBRO\n");
	}
	if (menor_mes == 12) {
		printf("DEZEMBRO\n");
	}

	system("pause");
	return 0;
}