//05. Fa�a um programa que receba alguma medi��o em metros e imprima a convers�o para cent�metros.
#include <stdio.h>
int main(){

  float metros, centimetros;

  printf("Digite o numeros em metros:\n");
  scanf("%2.f", &metros);
  // convertendo para centimetros
  centimetros = (metros *100);
  printf("A conversao em centimetros e:%2.f", centimetros);

  return 0;
}
