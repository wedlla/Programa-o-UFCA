//09. Faça um programa que receba a altura de uma pessoa e imprima seu peso ideal. Fórmula do peso ideal: (72.7 ∗ altura) - 58.
#include <stdio.h>
#include <stdlib.h>

int main(){

  float altura, peso_ideal;

  printf("Digite sua altura:\n");
  scanf("%.2f", &altura);

  peso_ideal = (72.7 * altura) - 58;

  printf("Seu peso ideal e:%.2f", peso_ideal);

  return 0;
}
