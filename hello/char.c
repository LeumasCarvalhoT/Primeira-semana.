#include <cs50.h>
#include <stdio.h>


int main(void)
{
    char j = get_char("jojo é magnífico? \n");
    if (j == 's' || j =='S')
     {
        printf ("Sem dúvidas \n");
     }

     else if (j == 'n' || j == 'N')

     {
         printf("Não gosto de macho musculoso \n");
     }
}
