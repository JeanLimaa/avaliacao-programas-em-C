#include <stdio.h>

void main() {
int quantidade = 0;
printf("Digite a quantidade de numeros: ");
scanf("%d",&quantidade);
int numeros[quantidade],pares[quantidade],impares[quantidade];
for(int i=0;i < quantidade;i++){
    printf("Digite o numero: ");
    scanf("%d",&numeros[i]);
} 
int contadorpar = 0, contadorimpar = 0;
for(int i = 0; i < quantidade; i++){
if(numeros[i] % 2 == 0){pares[contadorpar] = numeros[i]; contadorpar ++;}
else{impares[contadorimpar] = numeros[i];contadorimpar++;}
                                    }
printf("Os numeros pares sao: ");
for(int i = 0; i < contadorpar;i++){printf("%d ",pares[i]);}
printf("\nOs numeros impares sao: ");
for(int i = 0; i < contadorimpar;i++){printf("%d ",impares[i]);}
}