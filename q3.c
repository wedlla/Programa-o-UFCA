//03. Fa�a um programa que receba dois n�meros inteiros e imprima a soma desses dois n�meros.
#include<stdio.h>
int main(){

  int n1,n2,soma;

  printf("Digite dois numeros inteiros:\n");
  scanf("%d %d", &n1,&n2);
  soma = n1 + n2;
  printf("A soma dos numeros e:%d", soma);

  return 0;
}
