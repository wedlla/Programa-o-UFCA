02. Fa�a um programa que receba dois n�meros. Calcule a soma dos dois n�meros. Caso a
soma seja maior que 10, imprima o resultado da soma.

#include<stdio.h>
int main(){

int n1,n2,soma;

printf("Digite dois numeros\n");
scanf("%d %d", &n1,&n2);
soma = n1 + n2;

if(soma>10){
    printf("Soma = %d", soma);

}else
printf("Soma menor que 10");


return 0;
}
