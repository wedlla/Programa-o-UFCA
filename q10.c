//10. Fa�a um programa que pergunte quanto voc� ganha por m�s. Calcule e imprima: i) Sal�rio bruto; ii) Quanto pagou de imposto (8%); iii) Quanto pagou ao sindicato (5%); iv) Sal�rio l�quido.
#include <stdio.h>
#include <stdlib.h>

int main(){

  float valor, salario_bruto, imposto, sindicato, salario_liquido;

  printf("Digite quanto ganha por mes:\n");
  scanf("%,2f", &valor);

  salario_bruto = valor;
  printf("Salario bruto e:\n", salario_bruto);

  imposto = (salario_bruto * 0.8) - salario_bruto;
  printf("Pago de imposto:%.2f", imposto);

  sindicato = (salario_bruto * 0.5) - salario_bruto;
  printf("Pago ao sindicato:%.2f", sindicato);

  salario_liquido = (salario_bruto - imposto - sindicato);
  printf("O salario liquido e:%.2f", salario_bruto);

  return 0;

}
