//06. Fa�a um programa que receba o raio de um c�rculo, calcule e imprima a �rea deste c�rculo.
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Declara��o das vari�veis
	float raio, pi=3.14, area;

	// Entrada de dados
	printf("Digite o raio do circulo:\n");
	scanf("%f", &raio);

	// C�lculo da �rea da circunfer�ncia
	area = pi * raio * raio;

	// Apresenta��o do resultado
	printf("AREA = %.2f m2 \n", area);

	system("pause");
	return 0;
}
