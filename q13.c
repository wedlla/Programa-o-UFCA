//13. Fa�a um programa que receba o sal�rio mensal atual de um funcion�rio e o percentual de reajuste. Calcule e imprima o valor do novo sal�rio.
#include <stdio.h>
#include <stdlib.h>

int main(){

  float salario_atual, reajustes, novo_salario;

  printf("Digite o salario atual:\n");
  scanf("%.2f", &salario_atual);
  printf("Digite o percentual de reajuste:\n");
  scanf("%.2f", &reajuste);

  novo_salario = salario_atual * reajustes;

  printf("O valor do novo salario e:%.2f", novo_salario);

  return 0;
}
