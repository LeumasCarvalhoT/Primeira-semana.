#include <cs50.h>
#include <stdio.h>


int main(void)
{


int v= get_int ("v: ");

int v2= get_int ("v2: ");

int P= 100;

int P2= 150;

 if (v == P)

{
    printf("Suspeito ótario \n");

}
else if (v == P)
{
    printf("Tudo certo aqui \n");
}

else if (v2 > P2)
{
    printf("Suspeito ótario \n");
}
else if (v < P)
{
    printf("Tudo certo aqui \n");
}
}
