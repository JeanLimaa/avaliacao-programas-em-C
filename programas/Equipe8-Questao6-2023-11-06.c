#include<stdio.h>

void main(){
int i=1,somaq=0,num;
while(1){
printf("Digite um numero(0 para terminar): ");
scanf("%d",&num);
if(num==0) {
printf("A soma dos quadrados é:%d",somaq);
break;
}
printf("O produto é: %d\n", num*i);
somaq=somaq+(num*num);
i++;
}
}
    
