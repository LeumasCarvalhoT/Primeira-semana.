#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float valorTroco;

    // Solicita o valor do troco até que um valor não negativo seja inserido
    do {
        valorTroco = get_float("Troca devida: ");
    } while (valorTroco < 0);

    // Converte o valor do troco em centavos e arredonda para o inteiro mais próximo
    int centavos = round(valorTroco * 100);

    // Calcula o número de moedas de 25 centavos e atualiza o valor dos centavos
    int moeda25 = centavos / 25;
    centavos %= 25;

    // Calcula o número de moedas de 10 centavos e atualiza o valor dos centavos
    int moeda10 = centavos / 10;
    centavos %= 10;

    // Calcula o número de moedas de 5 centavos e atualiza o valor dos centavos
    int moeda5 = centavos / 5;
    centavos %= 5;

    // O restante dos centavos é igual ao número de moedas de 1 centavo
    int moeda1 = centavos;



    // Imprime o número total de cada moeda usada para dar o troco
    printf("Moedas de 25 centavos: %i\n", moeda25);
    printf("Moedas de 10 centavos: %i\n", moeda10);
    printf("Moedas de 5 centavos: %i\n", moeda5);
    printf("Moedas de 1 centavos: %i\n", moeda1);

    // Calcula o total de moedas
    int totalMoedas = moeda25 + moeda10 + moeda5 + moeda1;
    printf("Total de moedas utilizadas:%i \n,", totalMoedas);


}
