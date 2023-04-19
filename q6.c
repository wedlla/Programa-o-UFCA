06. Faça um programa que receba um número. Caso o número seja positivo, imprima sua
raiz; caso contrário, imprima seu quadrado

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 float valor,raiz,quadrado;

 printf("Digite um numero\n");
 scanf("%f", &valor);

 if(valor>0){

 printf("\nA RAIZ QUADRADA DO NUMERO E:%f",sqrt(valor));
}else{
printf("\nO QUADRADO DO NUMERO E:%f",pow(valor,2));

 }

    return 0;
}
