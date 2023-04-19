08. Faça um programa que receba um número a e um número b. Verifique se a é divisível
por b ou não e imprima na tela essa informação

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    printf("Digite dois numeros\n");
    scanf("%d %d", &a,&b);

    if(a%b==0){
        printf("a e divisivel por b");
    }else{
        printf("a nao e divisivel por b");
    }
    return 0;
}
