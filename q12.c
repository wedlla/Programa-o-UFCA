12. Faça um programa que receba um inteiro e imprima se ele se encontra entre 20 e 90
ou não

#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;
    printf("Digite um numero\n");
    scanf("%d", &valor);

    if(valor>20&&valor<90){
        printf("o numero se encontra entre 20 e 90");
    }
    else{
        printf("o numero nao se encontra entre 20 e 90");
    }
    return 0;
}
