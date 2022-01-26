#include <stdio.h>

int main()
{
    double A, n, R;
    n = 3.14159;
    scanf("%lf", &R);
    A = n * R* R;
    printf("A=%.4lf \n", A);
    //o .4 se refere a quantas casas sera mantida depois da virgula
    return 0;
}
