#include <stdio.h>

int ekub(int a, int b){

    if(a == b) return a;

    if(a > b) a = a - b;
    else b = b - a;

    return ekub(a, b);
}

int main(){

    printf("%d\n", ekub(25, 17));

    return 0;
}
