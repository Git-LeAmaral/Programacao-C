#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comorbidade;

    printf("Digite o tipo da comorbidade:");
    scanf("%d", &comorbidade);

    switch(comorbidade)
    {

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


    return 0;
}
