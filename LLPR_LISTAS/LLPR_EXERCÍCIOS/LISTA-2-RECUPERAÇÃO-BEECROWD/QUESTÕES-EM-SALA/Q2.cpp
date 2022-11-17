#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("OPERAÇÕES COM PERCENTUAL\n\n");
	
	int a, b, op;
	float r;

	printf("Valor inicial: ");
	scanf("%f", &a);
	printf("\nPercentual: ");
	scanf("%f", &b);
	
	
	printf("\nInforme a operação\n");
	printf("\n1 - Percentual; 2 - Valor inicial + Percentual; 3 - Valor inicial - Percentual.\n\n");
	printf("Valor da operação: ");
	scanf("%d", &op);

	if(op>=1 && op<=3) {
		if(op == 1) {
			r=a*(b/100);
			printf("Percentual = %f", r);
		} else if (op == 2) {
			r=a+a*(b/100);
			printf("Valor inicial + Percentual = %f", r);
		} else if (op == 3) {
			r=a-a*(b/100);
			printf("Valor inicial - Percentual = %f", r);
		}
		
	} else {
		printf("Operação invalida! Encerre o programa e tente novamente.");
	}	

	return 0;
}