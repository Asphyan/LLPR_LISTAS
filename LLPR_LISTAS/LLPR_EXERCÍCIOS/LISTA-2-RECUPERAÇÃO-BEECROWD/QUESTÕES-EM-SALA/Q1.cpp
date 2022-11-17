#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("LEITOR DE 2 NÚMEROS INTEIROS\n\n");
	
	int a, b, op;
	float r;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &a);
	printf("\nDigite o segundo número: ");
	scanf("%d", &b);

	printf("\nInforme a operação\n");
	printf("\n1 - Soma; 2 - Subtração; 3 - Multiplicação; 4 - Divisão: \n");
	scanf("%d", &op);
	
	if(op >= 1 && op <= 4) {
		if(op == 1) {
			r=a+b;
			printf("1 - Soma Resultado = %.2f", r);
		} else if(op == 2) {
			r=a-b;
			printf("2 - Subtração Resultado = %.2f", r);
		} else if(op == 3) {
			r=a*b;
			printf("3 - Multiplicação Resultado = %.2f", r);
		} else if(b == 0){
			printf("Erro! Divisão por 0");
		} else {
			r=(float)a/b;
			printf("4 - Divisão Resultado = %.2f", r);
		}
	} else {
		printf("Operação invalida! Encerre o programa e tente novamente.");
	}
	
	return 0;
}