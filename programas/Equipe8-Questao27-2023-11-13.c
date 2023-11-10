#include <stdio.h>

int PaymentsOptions()
{
    int option;
    // imprimir as opções
    printf("Qual a forma de pagamento?\n1) Opção: à vista com 10%% de desconto\n2) Opção: em duas vezes (preço da etiqueta)\n3) Opção: de 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00).\nDigite o número da opção: ");
    scanf("%d", &option);

    return option;
}

int main()
{
    int option = PaymentsOptions();

    float price, fullPrice, priceByMonth;

    printf("Qual foi o total de gasto pelo cliente na loja?\nDigite: ");
    scanf("%f", &price);

    int quantParcelas, juros, desconto = price * 0.1;

    switch (option)
    {
    case 1:
        price -= desconto;
        printf("À vista, com desconto, o valor será de: %2.f", price);
        break;
    case 2:
        
        printf("O valor total será de: %.2f\nA parcela, por mês, será de: %.2f", price, price/2);
        break;
    case 3:
        if (price > 100)
        {
            printf("Em quantas vezes? (digite apenas o número da quantidade de parcelas): ");
            scanf("%d", &quantParcelas);
            if (quantParcelas > 2)
            {
                juros = price * (quantParcelas * 0.03);                  // juros sobre o total do preço
                fullPrice = price + juros;                               // preço total com juros
                priceByMonth = (price / quantParcelas) + (price * 0.03); // preço por mês, cmo o juros
            } else{
                printf("Valor inválido ou a quantidade de parcelas é menor que 3 (nesse caso, escolha a segunda opção na forma de pagamento).\n");
            }
            printf("O valor total do produto, com juros, é: %2.f\nA parcela com juros, por mês, ficará: %2.f", fullPrice, priceByMonth);
        }
        else
        {
            printf("O valor precisa ser maior que R$ 100,00.");
        }
        break;
    default:
        printf("Opção inválida. Digite um número relacionada à opção desejada.");
        break;
    }
}