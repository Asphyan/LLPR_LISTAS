#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("LEITOR DE 2 N�MEROS INTEIROS\n\n");
	
	int a, b, op;
	float r;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &a);
	printf("\nDigite o segundo n�mero: ");
	scanf("%d", &b);

	printf("\nInforme a opera��o\n");
	printf("\n1 - Soma; 2 - Subtra��o; 3 - Multiplica��o; 4 - Divis�o: \n");
	scanf("%d", &op);
	
	if(op >= 1 && op <= 4) {
		if(op == 1) {
			r=a+b;
			printf("1 - Soma Resultado = %.2f", r);
		} else if(op == 2) {
			r=a-b;
			printf("2 - Subtra��o Resultado = %.2f", r);
		} else if(op == 3) {
			r=a*b;
			printf("3 - Multiplica��o Resultado = %.2f", r);
		} else if(b == 0){
			printf("Erro! Divis�o por 0");
		} else {
			r=(float)a/b;
			printf("4 - Divis�o Resultado = %.2f", r);
		}
	} else {
		printf("Opera��o invalida! Encerre o programa e tente novamente.");
	}
	
	return 0;
}
