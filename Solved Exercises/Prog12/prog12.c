#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, num[20], num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0;

	for (i=0; i<=19; i++) {
		printf("Digite um valor de %d a 20: ", i+1);
		scanf("%d", &num[i]);
		while (num[i] < 1 || num[i] > 6) {
			printf("Digite um valor de 0 a 20: ");
			scanf("%d", &num[i]);
		}

	}

	printf("valores: ");

	for (i=0; i<=19; i++) {
		printf("%d ", num[i]);
	}

	for(i=0; i<=19; i++) {
		if (num[i] == 1) {
			num1++;
		}
		if (num[i] == 2) {
			num2++;
		}
		if (num[i] == 3) {
			num3++;

		}
		if (num[i] == 4) {
			num4++;
		}
		if (num[i] == 5) {
			num5++;
		}
		if (num[i] == 6) {
			num6++;
		}
	}
	printf("\n");
	printf("O número 1 foi sorteado %d vezes\n", num1);
	printf("O número 2 foi sorteado %d vezes\n", num2);
	printf("O número 3 foi sorteado %d vezes\n", num3);
	printf("O número 4 foi sorteado %d vezes\n", num4);
	printf("O número 5 foi sorteado %d vezes\n", num5);
	printf("O número 6 foi sorteado %d vezes\n", num6);

	printf("\n\n");
	system("pause");
	return 0;
}