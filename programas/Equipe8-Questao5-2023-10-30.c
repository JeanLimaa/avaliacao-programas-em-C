#include <stdio.h>

int main() {
    int sum = 0;
    int number = 0;
    int product = 1;
    
    do{
        //coletar o número desejado
        printf("Número: ");
        scanf("%d", &number);
        //condiçoes de quais números serão somados/multiplicados
        if(
            number != 0 &&
            number > 2 &&
            number < 100 &&
            number != 10 &&
            number != 20 &&
            number != 32
        ){
            //atribuindo à variavel o valor da soma e do produto
            sum = (sum + number);
            product = (product * number);
        } else if(number == 0){
            //caso digite o zero, exibir mensagem que está encerrando.
          printf("Encerrando... \n");  
        } else {
            //caso os números não atendam aos requisitos, irá exibir ao usuario
            printf("Esse número não é menor que 100 ou maior 2 ou é diferente de 10, 20 ou 30. \n");
        }
    }while(number != 0);
    
    printf("A soma dos números lidos, que atenderam às condições, é: %d\n", sum);
    printf("O produto dos números lidos, que atenderam às condições, é: %d", product);

    return 0;
}