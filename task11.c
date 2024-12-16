#include <stdio.h>

int pow_function(int n, int m)
{
    if (m == 0) return 1;

    return n * pow_function(n, m - 1);
}
int main()
{
    int a, b;
    printf("1-Sonni kiriting - ");
    scanf("%i", &a);

    printf("2-Sonni kiriting - ");
    scanf("%i", &b);

    printf("Natija = %i", pow_function(a, b));

    return 0;
}