#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que calcule e apresente o valor do volume de uma lata de �leo (a lata
tem o formato de um cilindro), utilizando a f�rmula: �volume = 3.14159 * raio� * altura�.
Obs.: O programa deve ler os valores das vari�veis: raio e altura, armazenar o resultado do
c�lculo na vari�vel volume. */

int main()
{
   float pi, raio, altura, volume;

   pi = 3.14159;
   raio = 2;
   altura = 3.5;

   volume = (raio * raio) * altura;

   printf("O volume da lata de oleo e, %.2f \n", volume);
    return 0;
}
