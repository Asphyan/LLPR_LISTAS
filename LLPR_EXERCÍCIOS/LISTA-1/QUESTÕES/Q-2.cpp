#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float n1, n2, n3, media;
	
	printf("Calculadora de Média\n\n");
	
	printf("Digite Sua Primeira Nota:");
	scanf("%f", &n1);
	printf("Digite Sua Segunda Nota:");
	scanf("%f", &n2);
	printf("Digite Sua Terceira Nota:");
	scanf("%f", &n3);
	
	media= n1+n2+n3/3;
	
	printf("O Valor calculado da medida entre os números %f, %f e %f:\n", n1, n2, n3);
	
	printf("Sua Média Foi: %f\n", media);
	
	return 0;
}

