#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, op, cod[10], cod1, conta_valida;
	float saldos[10], vlr_deposito, vlr_saque, soma_saldos;
	printf("\e[1;93m");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$$$$$$$       Controle Bancário      $$$$$$$$\n");
	printf("$$$$$         Simulador - 10 contas       $$$$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n\n");
	printf("\e[0m");
	printf("Inserindo os dados de 10 contas bancárias\n\n");
	for (i=0; i<=9; i++) {
		printf("\033[0;38;5;226m");
		printf("Cliente %d |#| Digite o código da conta Bancária : ", i+1);
		scanf("%d", &cod[i]);
		printf("\033[0;38;5;226m");
		printf("Cliente %d |#| Informe o saldo da conta %d  (R$): ", i+1, cod[i]);
		scanf("%f", &saldos[i]);
		printf("\n");
	}

	do 	{
		printf("\e[1;31m");
		printf("###############################################################################\n");
		printf("#################                 Menu de opções     ##########################\n");
		printf(">>>>>> [01] - Efetuar depósito  \n");
		printf(">>>>>> [02] - Efetuar Saque  \n");;
		printf(">>>>>> [03] - Consultar o ativo bancário (Saldo de todos os clientes) \n");
		printf(">>>>>> [04] - Finalizar o Programa \n");
		printf("\e[0m");
		printf(">>>>>> Escolha uma opção >> ");
		scanf("%d", &op);

		while (op <= 0 || op > 4) {
			printf("\e[0m");
			printf("\n\nCódigo inválido... Tente novamente\n\n");
			printf(">>>>>> [01] - Efetuar depósito \n");
			printf(">>>>>> [02] - Efetuar Saque  \n");
			printf(">>>>>> [03] - Consultar o ativo bancário (Saldo de todos os clientes) \n");
			printf(">>>>>> [04] - Finalizar o Programa \n");
			printf(">>>>>> Escolha uma opção >> ");
			scanf("%d", &op);
		}

		if ( op == 1) { // EFETUAR DEPÓSITO
			printf(">>> Informe o código da conta bancária: ");
			scanf("%d", &cod1);

			conta_valida = 0;
			for (i=0; i<=9; i++) {
				if (cod1 == cod[i]) {
					printf(">>> Informe o valor a ser depositado (R$): ");
					scanf("%f", &vlr_deposito);
					saldos[i] += vlr_deposito;
					conta_valida = 1;
				}
			}

			if (conta_valida == 0) {
				printf("\nConta bancária inválida\n\n");
			}
		}

		if (op == 2) { // EFETUAR SAQUE
			printf(">>> Informe o código da conta bancária: ");
			scanf("%d", &cod1);
			conta_valida = 0;
			for (i=0; i<=9; i++) {
				if (cod1 == cod[i]) {
					printf(">>> Verifique o seu saldo\n");
					printf("Conta %d --> SALDO ATUAL = R$ %.2f", cod[i], saldos[i]);
					conta_valida = 1;
					if (saldos[i] > 0) {
					printf("  >>> Informe o valor a ser sacado (R$): ");
					scanf("%f", &vlr_saque);
					saldos[i] -= vlr_saque;
					printf("SALDO ATUALIZADO : R$ %.2f\n\n", saldos[i]);
						if (saldos[i] < 0){
							printf("\n\n Seu saldo é insuficiente...\n\n");
							break;
						}
					}
				}
			}
			if (!conta_valida) {
				printf("Conta não encontrada...\n\n");

			}

		}
		if (op == 3) { // CONSULTAR O ATIVO BANCÁRIO 
			soma_saldos =0;
			for (i=0; i<=9; i++) {
				soma_saldos += saldos[i];
			}
			printf("Somatório dos saldos de todos os clientes = R$ %.2f\n\n", soma_saldos);
		}

	} while (op != 4);

	system("pause");
	return 0;
}