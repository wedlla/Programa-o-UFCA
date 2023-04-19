11. Faça um programa que receba três números e imprima-os em ordem crescente.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1,n2,n3,aux;
    printf("Digite quatros numeros\n");
    scanf("%d %d %d", &n1,&n2,&n3);
    if(n1>n2&&n1>n3&&n2>n3){
        printf("Ordem crescente:%d %d %d\n",n3,n2,n1);
    }
    else if(n1>n2&&n1>n3&&n3>n2){
    printf("Ordem crescente:%d %d %d\n",n2,n3,n1);
    }
    else if(n2>n1&&n2>n3&&n1>n3){
        printf("Ordem crescente:%d %d %d\n",n3,n1,n2);
    }
    else if(n2>n3&&n2>n1&&n3>n1){
        printf("Ordem crescente:%d %d %d\n",n1,n3,n2);
    }
    else if(n3>n1&&n3>n2&&n1>n2){
        printf("Ordem crescente:%d %d %d\n",n2,n1,n3);
    }
    else
        printf("Ordem crescente:%d %d %d\n",n1,n2,n3);

    return 0;
}
