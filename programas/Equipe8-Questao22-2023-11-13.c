#include <stdio.h>

void main() {
    int somatotal = 0, soma, num = 0,quantidade;
    float media = 0;
    printf("Quantidade de numeros que serão inseridos: ");
    scanf("%d",&quantidade);
    int numeros[quantidade];
do{ 
    printf("Digite um numero: ");
scanf("%d",&numeros[num]);
somatotal+=numeros[num]; 
num++;
}while(num<quantidade);
 media=somatotal/quantidade;
 printf("Media:%.2f\n",media);
 
for(num = 0; num<quantidade;num++){
    printf("Soma do numero(%d) com a media:%.2f\n",numeros[num],numeros[num]+media);
}
}