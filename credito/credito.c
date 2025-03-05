#include <cs50.h>
#include <math.h>
#include <stdio.h>

int digitos(long cartao);
int primeiros_d(long cartao, int num_d);
int mult(long cartao);
int soma(long cartao);
int cartao_valido(int resultado, int uns_d, int num_d);

int main(void)
{
    long cartao = get_long("Número do seu cartão: ");

    int num_d = digitos(cartao);
    int uns_d = primeiros_d(cartao, num_d);
    int multiplicaçao = mult(cartao);
    int adiçao = soma(cartao);

    int resultado = multiplicaçao + adiçao;
    cartao_valido(resultado, uns_d, num_d);
}

// funcões
int digitos(long cartao)
{

    int digitos = 0;
    while (cartao > 0)
    {
        cartao /= 10;
        ;
        digitos++;
    }
    return digitos;
}

int primeiros_d(long cartao, int num_d)
{

    int primeiros_d = cartao / pow(10, num_d - 2);
    return primeiros_d;
}

int mult(long cartao)
{
    int vezes = 0;
    int processo;
    while (cartao > 0)
    {
        cartao /= 10;
        processo = (cartao % 10) * 2;
        if (processo > 9)
        {
            processo = (processo % 10) + (processo / 10);
        }
        vezes = processo + vezes;
        cartao /= 10;
    }
    return vezes;
}

int soma(long cartao)
{
    int soma = 0;
    while (cartao > 0)
    {
        soma = (cartao % 10) + soma;
        cartao /= 100;
    }

    return soma;
}

int cartao_valido(int resultado, int uns_d, int num_d)
{
    if (resultado % 10 == 0)
    {
        if (((uns_d == 37) || (uns_d == 34)) && (num_d == 15))
        {
            return printf("Cartão da American Express, confirmado\n");
        }

        else if (((uns_d == 51) || (uns_d >= 55)) && (num_d == 16))
        {
            return printf("Cartão da MasterCard, confirmado\n");
        }

        else if ((uns_d == 40) && ((num_d == 13) || (num_d == 16)))
        {
            return printf("Cartão da Visa, confirmado\n");
        }
    }
    else
    {
        return printf("Cartão inválido\n");
    }
    return resultado;
}
