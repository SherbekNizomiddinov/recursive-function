#include <stdio.h>

int func(int a, int b){
    if(b == 0) return 1;

    return a * func(a, b - 1);
}

int main(){

    printf("%d\n", func(5, 6));

    return 0;
}
