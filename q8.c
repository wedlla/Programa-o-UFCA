//08. Fa�a um programa que pergunte o quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e imprima o seu sal�rio neste m�s.
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
