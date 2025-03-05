#include <stdio.h>
#include <cs50.h>

//Validar a entrada de apenas numeros de 1 a 8
int main(void)
{
    int n;
    do
    {
        n = get_int("Digite um numero de 1 a 8: ");

    }while(n < 1 || n > 8);

    for(int k = 0; k < n; k++)
     {
        for (int h = n - k; h > 0; h--)
        printf(" ");
        for(int h = 0; h <= k; h++)
            printf("#");
        printf(" ");
    for(int h = 0; h <= k; h++)
        printf("#");
     printf("\n");
      }

}
