#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float n1, n2, n3, n4, produto;
	
	printf("Produto da Multiplicação de 4 Números\n\n");
	
	printf("Digite Seu Primeiro Número:");
	scanf("%f", &n1);
	printf("Digite Seu Segundo Número:");
	scanf("%f", &n2);
	printf("Digite Seu Terceiro Número:");
	scanf("%f", &n3);
	printf("Digite Seu Quarto Número:");
	scanf("%f", &n4);

	produto= n1*n2*n3*n4;
	
	printf("O produto da multiplicação entre os números %f, %f, %f e %f:\n", n1, n2, n3, n4);
	
	printf("Seu Produto Foi: %.0f\n", produto);
	
	return 0;
}

