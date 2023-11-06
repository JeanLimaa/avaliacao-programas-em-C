#include <stdio.h>

void main() {
int numero=1;
  while(numero!=0){
      printf("Digite um numero: ");
      scanf("%d",&numero);
      while(numero>=10){numero = numero - 10;}
      if(numero == 0 || numero == 2 || numero == 4 || numero == 6 || numero == 8){printf("O numero é par\n"); }else{
          printf("O numero é impar.\n");
  }  
}
}
