04. Faça um programa que receba um número e imprima se ele é positivo, negativo ou
nulo (zero).

#include<stdio.h>

int main(){
    float valor;

    printf("Digite um numero\n");
    scanf("%f", &valor);

    if(valor<0){
        printf("Numero negativo", valor);

    }
    else
        {
     if(valor>0){
        printf("Numero positivo", valor);
     }
    else{
        printf("Numero nulo", valor);
    }

    }

    return 0;
}
