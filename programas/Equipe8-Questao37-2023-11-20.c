#include <stdio.h>
#include <string.h>

struct Projetos
{ // número do projeto, receita, despesa, tipo de despesa; respectivamente.
    int id;
    float receita, despesa, saldo_projeto;
    char tipo_despesa[30];
};

void salvarProjetos(struct Projetos *projeto)
{
    int id;

    printf("\nId do projeto de 0 a 9 (-1 para finalizar): ");
    scanf("%d", &id);

    if(id == -1) return; // retorno vazio, para finalizar o programa
    if(id>9 || id<-1) {printf("\nO id deve ser enumerado de 0 a 9.\n"); return;} //verifica se o ID corresponde ao desejado
    projeto->id = id;

    printf("Receitas do projeto (ID: %d): ", projeto->id);
    scanf("%f", &projeto->receita);

    printf("Despesas do projeto (ID: %d): ", projeto->id);
    scanf("%f", &projeto->despesa);

    printf("Qual é o tipo de Despesa (ID: %d): ", projeto->id);
    scanf("%s", projeto->tipo_despesa);

    projeto->saldo_projeto = (projeto->receita - projeto->despesa);
}

void imprimirProjetos(struct Projetos *projeto)
{
        printf("\n-----------------------------------");
        printf("\nID do Projeto: %d\n", projeto->id);
        printf("Saldo total: %.2f\n", projeto->saldo_projeto);
        printf("-----------------------------------\n");
}

int main()
{
    int i = 0;

    // criando um array de objetos
    struct Projetos projeto[10];

    while (1)
    {
        salvarProjetos(&projeto[i]);

        if (projeto[i].id == -1) break; // condição de parada

        i++;
    }

    // Imprimir os detalhes dos projetos
    for (int j = 0; j < i; j++)
    {
        imprimirProjetos(&projeto[j]);
    }

    return 0;
}