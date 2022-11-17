#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float n1, n2, media;
	
	printf("Calculadora de Média\n\n");
	
	printf("Digite Sua Primeira Nota:");
	scanf("%f", &n1);
	printf("Digite Sua Segunda Nota:");
	scanf("%f", &n2);

	media= (n1+n2)/2;
	
	printf("O Valor calculado da medida entre os números %f e %f:\n", n1, n2);
	
	printf("Sua Média Foi: %f\n", media);
	
	return 0;
}

