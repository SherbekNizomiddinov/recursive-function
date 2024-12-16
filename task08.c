#include <stdio.h>

void func(int N)
{
    if(N <= 0)
    {
        return;
    }
    printf("Salom kod\n");
    func(N - 1);
}

int main()
{
    int N;
    printf("N sonini kiriting = ");
    scanf("%i",&N);
    func(N);

    return 0;
}