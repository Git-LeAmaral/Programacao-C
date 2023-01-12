#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia dois números inteiros quaisquer. No final escrever os números
entre eles.*/

int main()
{
    int x, y, i;

    printf("Digite o numero1: ");
    scanf("%d", &x);
    printf("Digite o numero2: ");
    scanf("%d", &y);

    if(x > y){
         for(i = y; i > x; i--){
            printf("%d \n", i);
         }
    }
    else{
        for(i = x; i < y; i++){
            printf("%d \n", i);
        }
}
   /* printf("Os valores sao...: %d \n", i);*/

    return 0;
}
