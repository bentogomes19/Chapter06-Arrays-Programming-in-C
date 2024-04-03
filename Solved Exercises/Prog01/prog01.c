#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, qtd_vendas[10], qtd_vendida = 0, ind, ind1, maior, menor;
	float vlr_unit[10], soma_vendas = 0, total_unit, comissao;

	for (i=0; i<=9; i++) {
		printf("Digite o preço do produto %d (R$) : ", i+1);
		scanf("%f", &vlr_unit[i]);

		printf("Produto %d | Digite a quantidade vendida: ", i+1);
		scanf("%d", &qtd_vendas[i]);

		qtd_vendida += qtd_vendas[i];
		total_unit = vlr_unit[i] * qtd_vendas[i];
		soma_vendas += total_unit;
	}

	printf("\nValor geral das vendas\n");
	printf("Quantidade vendida: %d  Total de vendas em R$ -> R$ %.2f\n", qtd_vendida, soma_vendas);
	printf("****************************************************************************************\n");

	for (i=0; i<=9; i++) {
		printf("Produto %d -> Valor : R$ %.2f -> Quantidades vendidas -> %d\n", i+1, vlr_unit[i], qtd_vendas[i]);
	}

	menor = qtd_vendas[0];
	maior = qtd_vendas[0];
	ind = 0;
	ind1 =0;

	for(i=1; i<=9; i++) {
		if (qtd_vendas[i] > maior) {
			maior = qtd_vendas[i];
			ind = i;
		}
		if (qtd_vendas[i] < menor) {
			menor = qtd_vendas[i];
			ind1 = i;
		}
	}

	comissao = 0.05 * soma_vendas;
	printf("Vendedor -> salario R$ 545.00 -> Comissão R$ %.2f\n\n", comissao);
	printf("Produto mais vendido da loja --> Produto %d | Quantidades vendidas: %d \n", ind+1, qtd_vendas[ind]);
	printf("Produto menos vendido da loja --> Produto %d | Quantidades vendidas: %d \n", ind1+1, qtd_vendas[ind1]);

	system("pause");
	return 0;
}