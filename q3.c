//03. Faça um programa que receba dois números inteiros e imprima a soma desses dois números.
#include<stdio.h>
int main(){

  int n1,n2,soma;

  printf("Digite dois numeros inteiros:\n");
  scanf("%d %d", &n1,&n2);
  soma = n1 + n2;
  printf("A soma dos numeros e:%d", soma);

  return 0;
}
