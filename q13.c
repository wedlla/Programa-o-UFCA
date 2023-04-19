13. Faça um programa que receba um número e imprima apenas “é válido” ou “não é válido” caos ele satisfaça pelo menos uma das condições: ser igual a 5, ser igual a 200, estar entre 10 e 100, estar entre 250 e 500.

#include <stdio.h>
#include <stdlib.h>

int main()
{
float num;
printf("Digite um numero\n");
scanf("%f",&num);
if(num == 5 || num == 200 || (num>10 && num<100)||(num>250 && num<500)){
printf("Valido");
}else
printf("Invalido");
return 0;
}






