//12. Fa�a um programa que receba o n�mero total de eleitores de um munic�pio, n�mero de votos brancos, nulos e v�lidos. Calcule e imprima o percentual que cada um representa em rela��o ao total de eleitores.
#include <stdio.h>
#include <stdlib.h>

int main(){

  int eleitores, brancos, nulos, validos;
  float percBrancos, percNulos, percValidos;

  printf("Informe o numero de eleitores:\n");
  scanf("%d", &eleitores);
  printf("Informe o numero de votos validos:\n");
  scanf("%d", &validos);
  printf("Informe o numero de votos em branco:\n");
  scanf("%d", &brancos);
  printf("Informe o numero de votos nulos:\n");
  scanf("%d", &nulos);

  percValidos = (validos / eleitores) * 100;
  percBrancos = (brancos / eleitores) * 100;
  percNulos = (nulos / eleitores) * 100;

  printf("\n\n%6.2f%% de votos validos.", percValidos);
  printf("\n%6.2f%% de votos em branco.", percBrancos);
  printf("\n%6.2f%% de votos nulos.", percNulos);

  return 0;
}
