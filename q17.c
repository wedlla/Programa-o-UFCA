/*17. Faça um programa que receba um inteiro entre 1 e 7. Imprima o dia da semana correspondente (1 sendo Domingo e 7 sendo Sábado). Caso o número recebido não seja dentro do intervalo, imprima que o dia da semana não existe.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
printf("Numero entre 1 e 7\n");
scanf("%d",&a);

switch(a){
case 1:
printf("Domingo");
break;
case 2:
printf("Segunda");
break;
case 3:
printf("Terça");
break;
case 4:
printf("Quarta");
break;
case 5:
printf("Quinta");
break;
case 6:
printf("Sexta");
break;
case 7:
printf("Sabado");
break;
}

return 0;
}
