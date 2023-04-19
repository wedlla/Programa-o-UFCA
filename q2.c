02. Faça um programa que receba dois números. Calcule a soma dos dois números. Caso a
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
