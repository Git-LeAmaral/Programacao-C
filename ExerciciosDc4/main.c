#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia o valor do salário bruto de uma pessoa. Calcular o desconto
de INSS levando em consideração o seguinte:
Salário Bruto Taxa de INSS
Salário até R$ 1.317,07 8%
Salário acima de R$ 1.317,07 até R$ 2.195,12 9%
Salário acima de R$ 2.195,12 11%
O limite máximo de desconto de INSS será de R$ 482,93, portanto você deve levar em
consideração este valor máximo.
No final apresentar:
- O valor do salário bruto;
- A taxa de INSS;
- O valor de desconto de INSS;
- O valor do salário líquido.
*/


int main()
{
    char nome[80];
    float salBruto, taxINSS, desconto, salLiquido;

    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o Salario Bruto: ");
    scanf("%f", &salBruto);

    printf("\n\n");
    if(salBruto <= 1317)
        taxINSS = 8;
    else if(salBruto <= 2195)
        taxINSS = 9;
    else
        taxINSS = 11;

    desconto = salBruto * (taxINSS / 100);
    salLiquido = salBruto - taxINSS;

    printf("Nome do Funcionario...: %s \n", nome);
    printf("Salario Bruto.........: R$ %10.2f \n", salBruto);
    printf("Taxa de INSS..........: %.1f %%\n", taxINSS);
    printf("Desconto do INSS......: %.2f \n", desconto);
    printf("Salario Liquido.......: R$ %10.2f \n", salLiquido);

    return 0;
}
