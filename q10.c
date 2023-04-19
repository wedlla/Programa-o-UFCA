10. Faça um programa que receba quatro números e imprima o maior e o menor número.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1,n2,n3,n4,menor,maior;
    printf("Digite quatros numeros\n");
    scanf("%d %d %d %d", &n1,&n2,&n3,&n4);

    menor=n1;
    maior=n1;

    if(menor>n2)
        menor=n2;
    if(menor>n3)
        menor=n3;
    if(menor>n4)
        menor=n4;
    if(maior<n2)
        maior=n2;
    if(maior<n3)
        maior=n3;
    if(maior<n4)
        maior=n4;
    printf("Menor:%d\nMaior:%d\n",menor,maior);


    return 0;
}
