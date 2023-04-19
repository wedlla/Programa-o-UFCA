//15. Faça um programa que pergunte a quantidade de quilômetros percorridos por um carro alugado e a quantidade de dias do aluguel. Calcule o preço do aluguel, levando em consideração que o aluguel do carro custa R$ 60,00 por dia e R$ 0,15 por quilometro rodado.
#include <stdio.h>
#include <stdlib.h>

int main(){

  int quant_km, quant_dias;
  float valor_aluguel;

  printf("Digite a quant de km percorrido por um carro:\n");
  scanf("%d", &quant_km);
  printf("Digite a quant de dias do aluguel:\n");
  scanf("%d", &quant_dias);

  valor_aluguel = (quant_km * 0.15) + (quant_dias * 60);

  printf("O preço do aluguel e:%.2f", valor_aluguel);

  return 0;
}
