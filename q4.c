//04. Faça um programa que peça 3 notas de avaliações e imprima a média aritmética simples dessas notas.
#include <stdio.h>
int main(){
float nota1, nota2, nota3, media;

  printf("Digite tres notas:\n");
  scanf("%2.f %2.f %2.f", &nota1 &nota2 &nota3);

  media = (nota1 + nota2 + nota3) / 2;

  printf("A media e:%2.f\n", media);

  return 0;
}
