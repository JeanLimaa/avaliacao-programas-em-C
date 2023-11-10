#include <stdio.h>
#include <math.h>

int main() {
    double S;
    
    //loop que incrementa 10 em 10 até 100.000
    for (int n = 10; n <= 100000; n += 10) {
        // Fórmula
        S = 1 + 1.0 / n;

        printf("Para n = %d, S = %.6f\n", n, S);
    }

    return 0;
}