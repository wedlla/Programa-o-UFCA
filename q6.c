//06. Faça um programa que receba o raio de um círculo, calcule e imprima a área deste círculo.
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Declaração das variáveis
	float raio, pi=3.14, area;

	// Entrada de dados
	printf("Digite o raio do circulo:\n");
	scanf("%f", &raio);

	// Cálculo da área da circunferência
	area = pi * raio * raio;

	// Apresentação do resultado
	printf("AREA = %.2f m2 \n", area);

	system("pause");
	return 0;
}
