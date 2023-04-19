03. Faça um programa que receba um número e imprima se ele é par ou ímpar

#include<stdio.h>

int main(){

int valor;

printf("Digite um numero\n");
scanf("%d", &valor);

if(valor % 0){

    printf("Numero par", valor);
}else
printf("Numero impar");

return 0;

}
