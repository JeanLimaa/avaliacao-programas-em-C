#include <stdio.h>
#include <math.h>
void main() {
    int somaq = 0,num,contador = 0,somatotal = 0,duzentos[100],posicao=0;
    float media=0;
    float pcubo = 1;
   printf("Digite uma sequencia de numeros e 0 para finalizar.\n");
   while(1){
       printf("Inserir numero: ");
       scanf("%d",&num);
       if(num>200){duzentos[posicao]=num;posicao++;}
       if(num==0){
           break;
       }
       contador++;
       somatotal+=num;
       somaq+=(num*num);
       pcubo*=(num*num*num);
       //printf("%d,%f",num,pcubo);
      }
   
   media=somatotal/contador;
   printf("Soma dos quadrados:%d\n",somaq);
   printf("Produto dos cubos:%0.f\n",pcubo);
   printf("Media:%.2f\n",media);
   if(posicao>0){
   printf("Os numeros maiores que 200 são: ");
   for(int i=0; i<posicao; i++){printf("%d ",duzentos[i]);}
}
}