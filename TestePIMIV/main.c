#include <stdio.h>
#include <stdlib.h>

int main()
{
   int comorbidade, diabetes, obesidade, hipertensao, tuberculose;           /* ler tipos de comorbidades*/

    do{

        printf("Digite o tipo da comorbidade: \n");
        printf("0 - Diabetes \n");
        printf("1 - Obesidade \n");
        printf("2 - Hipertensao \n");
        printf("3 - tuberculose \n");
        printf("4 - Sem Comorbidades \n");
        printf("Digite uma opcao:");
        scanf("%d", &comorbidade);



            switch(comorbidade){

        case 0:
            printf("Diabetes \n");
            break;
        case 1:
            printf("Obesidade \n");
            break;
        case 2:
            printf("Hipertensao \n");
            break;
        case 3:
            printf("Tuberculose \n");
            break;
        default:
            printf("Sem comorbidade \n");
            break;

        }

    }
    while(comorbidade != 4);

    return 0;
}
