//11. Faça um programa que receba 2 números inteiros e um número real. Calcule e imprima: i) o produto do dobro do primeiro com a metade do segundo; ii) a soma do triplo do primeiro com o terceiro; iii) o terceiro elevado ao cubo.
#include <stdio.h>
#include <stdlib.h>

int main(){
  int n1, n2;
  float n3, produto, soma, triplo;

  printf("Digite dois numeros inteiros:\n");
  scanf("%d %d", &n1 &n2);
  printf("Digite um numero real:\n");
  scanf("%.2f", &n3);

  produto = (2*n1)*(n2/2);
  soma = (3*n1)+n3;
  triplo = n3*n3*n3;

  printf("O produto do dobro do primeiro com a metade do segundo e:%.2f", produto);
  printf("A soma do triplo do primeiro com o terceiro e:%.2f", soma);
  printf("O terceiro elevado ao cubo e:%.2f", triplo);

  return 0;
}
