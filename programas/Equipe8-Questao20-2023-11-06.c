#include <stdio.h>

void main() {
int i=0,quantidade;
printf("Digite a quantidade de numeros inseridos: ");
scanf("%d",&quantidade);
int sequencia[quantidade];
do{ printf("Digite um numero: ");
scanf("%d",&sequencia[i]);
i++;
}while(i<quantidade);
for(i = quantidade - 1;i >= 0;i--){
    printf("%d",sequencia[i]);
}
}
