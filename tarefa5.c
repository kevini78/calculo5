#include <stdio.h>

int main() {
    float custo, frete, despesas, valorVenda;

    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo);

    printf("Digite o valor do frete: ");
    scanf("%f", &frete);

    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesas);

    float custoTotal = custo + frete + despesas;

    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);

    float lucro = valorVenda - custoTotal;
    float percentualLucro = (lucro / custoTotal) * 100;

    printf("Percentual de lucro: %.2f%%\n", percentualLucro);

    return 0;
}