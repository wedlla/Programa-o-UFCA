06. Fa�a um programa que receba um n�mero. Caso o n�mero seja positivo, imprima sua
raiz; caso contr�rio, imprima seu quadrado

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
