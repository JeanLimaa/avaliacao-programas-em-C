#include <stdio.h>

int main()
{
    int tabuada;

    for(int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++)
        {
            tabuada = i * j;
            printf("%dx%d = %d\n", i, j, tabuada);
        } 
    }

    return 0;
}