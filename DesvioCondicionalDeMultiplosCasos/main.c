#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    switch(codigo)
    {
          case 0:
              printf("chaleira \n");
            break;
          case 1:
              printf("panela \n");
             break;
          case 2:
              printf("prato \n");
             break;
          case 3:
              printf("caneca \n");
             break;
          default:
              printf("codigo invalido \n");
             break;
    }


    return 0;
}
