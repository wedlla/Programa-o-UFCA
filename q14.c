//14. Faça um programa que receba uma quantidade de dias, horas, minutos e segundos. Calcule e imprima o total em segundos.
#include <stdio.h>
#include <stdlib.h>

int main(){

int dias, horas, minutos, segundos;
  float total_em_segundos;

  printf("Digite os dias:\n");
  scanf("%d", &dias);
  printf("Digite as horas:\n");
  scanf("%d", &horas);
  printf("Digite os minutos:\n");
  scanf("%d", &minutos);
  printf("Digite os segundos:\n");
  scanf("%d", &segundos);

  total_em_segundos = dias * 24 * 3600 + horas * 3600 + minutos * 60 + segundos;

  print("Convertido em segundos é igual a %.2f", total_em_segundos);

  return 0;
}
