#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {
	int i, janela[24], corredor[24], op, num, lotado, x=0, k, y = 0;
	char poltrona;

		for (i=0; i<=23; i++) {
			 janela[i] = 0;
		}
		for (i=0; i<=23; i++) {
			 corredor[i] = 0;
		}
	do
	{

		printf("*** Menu de Opções ***\n");
		printf(" [01] # Vender Passagem\n");
		printf(" [02] # Mostrar Mapa de ocupação do ônibus\n");
		printf(" [03] # Encerrar\n");
		printf(" >> Escolha uma opção: ");
		scanf("%d", &op);

		while ( op > 3) {

			printf("\n\nCódigo inválido... Tente novamente...\n");
			printf(" [01] # Vender Passagem\n");
			printf(" [02] # Mostrar Mapa de ocupação do ônibus\n");
			printf(" [03] # Encerrar\n");
			printf(" >> Escolha uma opção: ");
			scanf("%d", &op);
		}


		if (op == 1) {
			printf("Escolha o seu assento | J - Janela | C - Corredor | >> ");
			fflush(stdin);
			scanf("%c", &poltrona);
			poltrona=toupper(poltrona);

			while (poltrona != 'J' && poltrona != 'C') {
				printf("Código inválido... Tente novamente\n\n");
				printf("Escolha o seu assento | J - Janela | C - Corredor | >> ");
				fflush(stdin);
				scanf("%c", &poltrona);
				poltrona=toupper(poltrona);
			}

			printf("Poltronas: 0|1|2|3|4|5|...|24|\n");
			printf("Informe o número da poltrona: ");
			scanf("%d", &num);

			if (poltrona == 'J') { // Janela
				if (num < 0 || num > 24) {
					printf("\nNúmero de poltrona inválida\n\n");
				}
				if (janela[num] == 1) {
					printf("\nPoltrona ocupada\n\n");
				}
				else if (janela[num] == 0) {
					printf("\nVenda Efetivada\n\n");
					janela[num] = 1;
					y++;
				}
			}

			if (poltrona == 'C') { // Corredor
				if (num < 0 || num > 24) {
					printf("\nNúmero de poltrona inválida\n\n");
				}
				if (corredor[num] == 1) {
					printf("\nPoltrona ocupada\n\n");
				}
				else if (corredor[num] == 0) {
					printf("\nVenda Efetivada\n\n");
					corredor[num] = 1;
					x++;
				}


				}
				if (x == 24 && y == 24) {
					printf("Ônibus lotado\n\n");
				}
		}

		if (op == 2) {
			printf("\n\n1 - Poltrona Ocupada |#| 0 - Poltrona desocupada\n\n");
			printf("Janelas\t\tCorredor\n");
			for (i=0; i< 24; i++) {
				printf("[%d] --> %d \t [%d] --> %d\n", i, janela[i], i, corredor[i]);
			}

		}
		printf("\n\n");

	} while (op != 3);


	system("pause");
	return 0;
}