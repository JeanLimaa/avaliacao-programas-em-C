#include <stdio.h>

int main()
{
    int i;
    int length;
    printf("Quantidade de números: ");
    scanf("%d", &length);
    
    int numbers[length];
    
    for(i = 0; i < length; i++){
        printf("Número: ");
        scanf("%d", &numbers[i]);
    }
    
    for(i = 0; i < length; i++){
        if(numbers[i] > 100) printf("É maior que 100: %d\n", numbers[i]);
        
        if (numbers[i] < 10) printf("É menor que 10: %d\n", numbers[i]);
        
        if (numbers[i] == 20) printf("É igual a 20: %d\n", numbers[i]);
        
        if (numbers[i] == 30) printf("É igual a 30: %d\n", numbers[i]);
        
        if (numbers[i] == 40) printf("É igual a 40: %d\n", numbers[i]);
    }
    
    printf("A quantidade de números lidos foram: %d\n", length);
    printf("Fim");
}