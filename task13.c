#include <stdio.h>

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int N;
    printf("Son kiriting - ");
    scanf("%i",&N);

    printf("%i ning factoriali %i\n", N, factorial(N));

    return 0;
}