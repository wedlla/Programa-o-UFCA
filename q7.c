07. Fa�a um programa que receba um n�mero e imprima a mensagem: �� m�ltiplo de 3�
ou �n�o � m�ltiplo de 3�.

#include<stdio.h>
#include<stdlib.h>

int main(){

int valor;
printf("Digite um numero\n");
scanf("%d", &valor);

if(valor%3==0){
    printf("E multiplo de 3", valor);

}else{
    printf("Nao e multiplo de 3", valor);
}
return 0;
}
