#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int n1, n2, resto;
	float quociente;
	
	printf("Calculadora de Resto e Quociente\n\n");
	
	printf("Digite Sua Primeira Nota:");
	scanf("%d", &n1);
	printf("Digite Sua Segunda Nota:");
	scanf("%d", &n2);

	quociente= n1/n2;
	resto= n1%n2;
	
	printf("O Valor calculado da medida entre os números %d e %d:\n", n1, n2);
	
	printf("Seu Quociente Foi: %f\n", quociente);
	printf("Seu Resto Foi: %d\n", resto);
	
	return 0;
}
