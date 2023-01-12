#include <stdio.h>
#include <stdlib.h>
/*1. Escreva um programa que leia dois valores inteiros quaisquer, e escreva o maior deles. */



int main()
{
   int valor1, valor2;

   printf("Digite o primeiro valor: ");
   scanf("%d", &valor1);
   printf("Digite o segundo valor: ");
   scanf("%d", &valor2);

   printf("\n\n");
   if(valor1 > valor2)
    printf("O numero digitado e o maior deles \n ");

    return 0;
}
