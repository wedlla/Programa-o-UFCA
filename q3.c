03. Fa�a um programa que receba um n�mero e imprima se ele � par ou �mpar

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
