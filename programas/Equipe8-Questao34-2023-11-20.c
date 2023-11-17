#include <stdio.h>

#define TAMANHO_VETOR 60

int main()
{
    // Estipulando as informações acerca das velocidades
    float velocidades[TAMANHO_VETOR] = {10.5, 11.0, 11.2, 11.5, 12.0, 12.5, 12.5, 12.0, 11.8, 11.7,
                                        11.6, 11.5, 11.3, 11.2, 11.0, 10.8, 10.7, 10.5, 10.5, 10.6,
                                        10.7, 10.8, 11.0, 11.2, 11.5, 11.8, 12.0, 12.2, 12.5, 12.8,
                                        13.0, 13.2, 13.5, 13.8, 14.0, 14.2, 14.5, 14.7, 14.8, 15.0,
                                        15.2, 15.5, 15.7, 15.8, 16.0, 16.2, 16.5, 16.8, 17.0, 17.2,
                                        17.5, 17.8, 18.0, 18.2, 18.5, 18.7, 18.8, 19.0, 19.2, 19.5};

    // No entanto, poderia fazer isto e perguntar quais são as 60 posições em cada segundo.
    /*     printf("Digite os dados de velocidade em m/s para cada segundo:\n");
        for (int i = 0; i < TAMANHO_VETOR; i++) {
            printf("Segundo %d: ", i + 1);
            scanf("%f", &velocidades[i]);
        } */

    // Inicialização de variáveis para armazenar informações
    int maiorPeriodoSemDiminuir = 0, instanteFrenagemMaisAbrupta = 0, instanteInicioMaiorAceleracao = 0,
        maiorPeriodoVelocidadeConstante = 0, inicioPeriodoVelocidadeConstante = 0;
    float maiorAceleracao = 0;

    // Processamento dos dados
    for (int i = 1; i < TAMANHO_VETOR; i++)
    {

        // Verifica se o veículo está se deslocando sem diminuir a velocidade
        if (velocidades[i] >= velocidades[i - 1])
        { // se a proxima velocidade foi maior que a anterior, ele ficou sem diminuir a velocidade
            maiorPeriodoSemDiminuir++;
        }
        else
        {
            if (maiorPeriodoSemDiminuir >= maiorPeriodoVelocidadeConstante)
            { // aqui é feita uma verificação para atribuir o valor à outra variavavel e zerar a principal.
                maiorPeriodoVelocidadeConstante = maiorPeriodoSemDiminuir;
                inicioPeriodoVelocidadeConstante = i - maiorPeriodoSemDiminuir;
            }
            maiorPeriodoSemDiminuir = 0;
        }

        // Verifica o início da frenagem mais abrupta
        if (velocidades[i] < velocidades[instanteFrenagemMaisAbrupta])
        {
            instanteFrenagemMaisAbrupta = i;
        }

        // Verifica a maior aceleração positiva
        if (i >= 2 && velocidades[i] > velocidades[i - 1] && (velocidades[i] - velocidades[i - 1]) > maiorAceleracao)
        {
            maiorAceleracao = velocidades[i] - velocidades[i - 1];
            instanteInicioMaiorAceleracao = i - 1;
        }
    }

    // Exibe as velocidades em cada segundo
    printf("Velocidade instantânea em cada segundo:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++)
    {
        printf("Segundo %d: %.2f m/s\n", i + 1, velocidades[i]);
    }

    // Exibe as informações
    printf("\nInformações sobre o veículo:\n");
    printf("a. Maior período de tempo em que o veículo se deslocou sem diminuir a velocidade: %d segundos\n", maiorPeriodoVelocidadeConstante);
    if (maiorPeriodoVelocidadeConstante > 0)
    {
        printf("(Início: Segundo %d, Fim: Segundo %d)\n", inicioPeriodoVelocidadeConstante + 1, inicioPeriodoVelocidadeConstante + maiorPeriodoVelocidadeConstante);
    }
    else
    {
        printf("O veículo está diminuindo a velocidade desde o início.\n");
    }

    printf("b. Instante de tempo em que o veículo iniciou a frenagem mais abrupta: Segundo %d\n", instanteFrenagemMaisAbrupta + 1);

    if (maiorAceleracao > 0)
    {
        printf("c. Maior aceleração positiva e instante de tempo em que ela se iniciou: %.2f m/s² (Segundo %d)\n", maiorAceleracao, instanteInicioMaiorAceleracao + 1);
    }
    else
    {
        printf("c. O veículo não teve aceleração positiva.\n");
    }

    printf("d. Maior período de tempo em que o veículo se deslocou com velocidade constante: %d segundos\n\n", maiorPeriodoVelocidadeConstante);

    return 0;
}
