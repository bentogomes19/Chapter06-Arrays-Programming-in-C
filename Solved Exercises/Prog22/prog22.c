#include <stdlib.h>
#include <stdio.h>

int main() {
	int i, cod[10], estoque[10], cod_usr, cod_prod, k, qtd_usr;
	printf("Estoque de mercadorias Empresa China\n");

	for (i=0; i<3; i++) 
	{
		printf("Produto %d >> Digite o código do produto: ", i+1);
		scanf("%d", &cod[i]);

		printf("Produto %d >> Digite a quantidade do #%d  : ", i+1, cod[i]);
		scanf("%d", &estoque[i]);
		printf("\n");

	}

	do
	{
		int achou = 0;
		printf("\nDigite o código do cliente: ");
		scanf("%d", &cod_usr);

		if (cod_usr == 0) {
			break;
		}

		printf("Cliente #%d | Digite o código do produto que você deseja comprar: ", cod_usr);
		scanf("%d", &cod_prod);

		printf("Produto #%d | Digite a quantidade : ", cod_prod);
		scanf("%d", &qtd_usr);


		for (i=0; i<3; i++) 
		{
			if (cod_prod == cod[i]) //  cod[i] == 3 4 5; 
			{
				printf("Produto #%d  ", cod[i]);
				achou = 1;
				if (qtd_usr <= estoque[i])
				{
					estoque[i] -= qtd_usr;
					printf("Pedido atendido. Obrigado e volte sempre...\n\n");
				}
				else
				{
					printf("Não Temos estoque suficiente dessa mercadoria...\n\n");
				}
				break;
			}
		}

		if (achou != 1) 
		{
			printf("Produto inexistente...\n");
		}
		printf("Atualização de Estoque\n");
		for(i=0; i<3; i++) 
		{
			printf("Produto #%d --> Estoque : %d \n", cod[i], estoque[i]);
		}

	} while (cod_usr != 0);

	system("pause");
	return 0;
}