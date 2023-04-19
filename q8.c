//08. Faça um programa que pergunte o quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e imprima o seu salário neste mês.
#include <stdio.h>
#include <stdlib.h>

int main(){

  float valor, horas, salario;

  printf("Digite quanto ganha por hora:\n");
  scanf("%.2f", &valor);
  printf("Digite o numero de horas trabalhadas no mes:\n");
  scanf("%.2f", &horas);

  salario = valor * horas;

  printf("Salario:%.2f", salario);

  return 0;
}
