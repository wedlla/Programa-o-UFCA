15. Faça um programa que receba a idade de uma pessoa e imprima sua classe eleitoral
(facultativo, obrigatório ou não-eleitor).*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade;
    printf("Digite a idade\n");
    scanf("%d", &idade);

    if(idade>=18&&idade<=65){
        printf("Eleitor obrigatorio\n");
    }
    else if(idade>=16&&idade<18||idade>65){
        printf("Eleitor facultativo\n");
    }else{
        printf("Nao eleitor\n");
    }

    return 0;
}
