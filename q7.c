//07. Faça um programa que receba o lado de um quadro, calcule a área de um quadrado e imprima o dobro desta área.
#include <stdio.h>
#include <stdlib.h>

int main(){
float lado, area;

  printf("Digite o lado do quadrado:\n");
  scanf("%f", &lado);

  //Calculo da Área
  area = lado * lado;
  printf("O dobro da area e:%.2f", area *2);

  return 0;

}
