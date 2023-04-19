16. Faça um programa que receba o valor de x e imprima o valor de f(x) com base na função abaixo:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float x,quadrado,cubo;
printf("Valor de x: ");
scanf("%f",&x);
quadrado = pow(x,2);
cubo = pow(x,3);
if (x<=1){
printf("f(x)= 1");
}else if(x>1 && x<=2){
printf("f(x)= 2");
}else if(x>2 && x<=3){
printf("f(x)= %.2f",quadrado);
}else if(x>3){
printf("f(x)= %.2f",cubo);
}else
return 0;
}
