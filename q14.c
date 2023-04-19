14. Faça um programa que receba um número e imprima sua raiz quadrada, se possível. Caso não seja possível, apresente a mensagem “não é possível“.

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




