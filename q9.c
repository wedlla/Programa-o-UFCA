09. Fa�a um programa que receba dois inteiros diferentes. Imprima na tela o maior e o
menor n�mero.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    printf("Digite dois numeros\n");
    scanf("%d %d", &a,&b);

 if (a > b){
    printf("O valor maior e:%d\nO valor menor � %d", a, b);
    }else{
         printf("O valor maior e:%d\nO valor menor � %d", b, a);
    }
    return 0;
}
