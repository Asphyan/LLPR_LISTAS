#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>

int main() {
	setlocale(LC_ALL, "Potuguese_Brazil");

	printf("Leitor De Números(Soma e Subtração)\n");

	float n1, n2, n3, soma, subtracao;

	printf("\nDigite o primeiro número a somar: ");
	scanf("%f", &n1);
	printf("\nDigite o segundo número a somar: ");
	scanf("%f", &n2);

	soma= n1+n2;

	printf("\nSua soma foi igual a: %.3f", soma);

	printf("\n\nDigite o terceiro número, que será subtraído da soma: ");
	scanf("%f", &n3);

	subtracao= soma-n3;

	printf("\nSua subtração foi igual a: %.3f", subtracao);

	return 0;
}
