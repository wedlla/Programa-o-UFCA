05. Faça um programa que receba dois números e efetue a soma deles. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso
o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.

#include<stdio.h>

int main(){

    int n1,n2,soma;

    printf("Digite dois numeros\n");
    scanf("%d %d", &n1,&n2);
    soma = n1 + n2;

    if(soma>20){
        printf("Soma = %d", soma+8);
    }
    else
        {
        printf("Soma = %d", soma-5);
    }

    return 0;
}
