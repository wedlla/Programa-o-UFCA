/*17. Fa�a um programa que receba um inteiro entre 1 e 7. Imprima o dia da semana correspondente (1 sendo Domingo e 7 sendo S�bado). Caso o n�mero recebido n�o seja dentro do intervalo, imprima que o dia da semana n�o existe.*/

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
printf("Ter�a");
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
