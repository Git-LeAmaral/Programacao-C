#include <stdio.h>
#include <stdlib.h>

/*4. Escreva um programa que leia o valor do sal�rio hora, a quantidade de horas trabalhadas e a
quantidade de filhos menores de 14 anos de um funcion�rio. Calcular o valor do sal�rio bruto.
Para calcular o valor do sal�rio fam�lia leve em considera��o o seguinte:
*/
/* Sal�rio                                                         Sal�rio fam�lia

Sal�rio at�      R$ 700,00                                  R$ 9,50 para cada filho

Sal�rio acima de R$ 700,00 at� R$ 1.000,00    R$ 6,60 para cada filho

Sal�rio acima de R$ 1.000,00                           R$ 1,50 para cada filho  */


int main()
{
    float salHora, salBruto, salFamilia;
    int quantFilhos, horasTrab;
    char nome[80];

    printf("Nome do funcionario: ");
    gets(nome);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horasTrab);
    printf("Digite a quantidades de filhos menores de 14: ");
    scanf("%d", &quantFilhos);
    printf("Digite o valor do Salario por hora: ");
    scanf("%f", &salHora);

    salBruto = horasTrab * salHora;

    if(salBruto <= 700)
        salFamilia = 9.5;
    else if(salBruto <= 1000)
        salFamilia = 6.6;
    else
        salFamilia = 1.5;

     salFamilia = quantFilhos * salFamilia;

    printf("Salario Familia...: %.2f\n", salFamilia);
    printf("\n\n");
    printf("Salario Bruto.....: %.2f\n", salBruto);


    return 0;
}
