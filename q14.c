14. Fa�a um programa que receba um n�mero e imprima sua raiz quadrada, se poss�vel. Caso n�o seja poss�vel, apresente a mensagem �n�o � poss�vel�.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

 float valor,raiz;
 printf("Digite um numero\n");
 scanf("%f", &valor);
 raiz=sqrt(valor);
 if(valor>0){
    printf("Raiz:%.2f\n", raiz);
 }
 else
    printf("Nao e possivel nos reais\n");

    return 0;
}




