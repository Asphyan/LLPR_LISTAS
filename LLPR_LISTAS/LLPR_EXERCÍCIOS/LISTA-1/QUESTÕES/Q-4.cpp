#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float n1, n2, n3, n4, produto;
	
	printf("Produto da Multiplica��o de 4 N�meros\n\n");
	
	printf("Digite Seu Primeiro N�mero:");
	scanf("%f", &n1);
	printf("Digite Seu Segundo N�mero:");
	scanf("%f", &n2);
	printf("Digite Seu Terceiro N�mero:");
	scanf("%f", &n3);
	printf("Digite Seu Quarto N�mero:");
	scanf("%f", &n4);

	produto= n1*n2*n3*n4;
	
	printf("O produto da multiplica��o entre os n�meros %f, %f, %f e %f:\n", n1, n2, n3, n4);
	
	printf("Seu Produto Foi: %.0f\n", produto);
	
	return 0;
}

