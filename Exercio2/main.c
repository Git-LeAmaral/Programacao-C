#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que calcule e apresente o valor do volume de uma lata de óleo (a lata
tem o formato de um cilindro), utilizando a fórmula: “volume = 3.14159 * raio² * altura”.
Obs.: O programa deve ler os valores das variáveis: raio e altura, armazenar o resultado do
cálculo na variável volume. */

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
