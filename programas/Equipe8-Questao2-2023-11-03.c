#include <stdio.h>
#include <math.h>

void main()
{
int numero, soma, produto1, contador, somaq, produto2,somatotal;
float media;
soma = 0; produto1 = 0; produto2 = 0; contador = 0; somaq = 0; somatotal=0;
printf("Digite uma sequência de numeros, para finalizar o processamento digite 0 ou 99 ou 14.\n");
    while(1){ //enquanto for verdadeiro fazer..
printf("Inserir numero: ");
scanf("%d", &numero);
if(numero == 99 || numero == 0 || numero == 14){
    break; //termina a insercao de numeros
    //nao é necessario a adicao de contador = contador - 1 no final pois o break ocorre antes.
}
    contador++;
    somatotal+=numero;
    
if (numero < 150 && numero > 50){
    soma += numero; //+= é a adicao ao resultado
}
if (numero != 10 && numero > 5 && numero < 70){
    if(produto1 == 0){
        produto1 = numero;}
        else{
        produto1 *= numero; //*= ''adicionado a multiplicacao do produto''
}
}
if (numero > 20 && numero < 30){
    if(produto2 == 0){
        produto2 = numero;}
        else{
        produto2 *= numero; //*= ''adicionado a multiplicacao do produto''
}
}
if (numero > 16){
    somaq += (numero * numero);
}

            }
 media =  somatotal / contador;
    printf("Soma dos números entre 50 e 150: %d\n", soma);
    printf("Produto dos números diferentes de 10, maiores que 5 e menores que 70: %d\n", produto1);
    printf("Média dos números digitados: %.2f\n", media);
    printf("Produto dos números entre 20 e 30: %d\n", produto2);
    printf("Soma dos quadrados dos números maiores que 16: %d\n", somaq);
    }
