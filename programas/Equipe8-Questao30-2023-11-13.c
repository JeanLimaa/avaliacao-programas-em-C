#include <stdio.h>
#include <string.h>
void main() {
   char soma[5],divisao[8],multiplicacao[14],subtracao[10],comando[100];
   int numero1, numero2;
   printf("Digite o comando (sendo este soma, subtracao, multiplicacao ou divisao, no formato: comando numero numero\n");
   scanf("%s",&comando);
          scanf("%d",&numero1);
       scanf("%d",&numero2);
   if(strcmp(comando,"soma")==0){
       printf("%d",numero1+numero2);
   }
      else if(strcmp(comando,"subtracao")==0){
       printf("%d",numero1-numero2);
   }
         else if(strcmp(comando,"divisao")==0){
       if(numero2==0){printf("numero 2 nao pode ser = 0");}
       else printf("%d",numero1/numero2);
   }
            else if(strcmp(comando,"multiplicacao")==0){
       printf("%d",numero1*numero2);
   }
}