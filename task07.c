#include <stdio.h>

int ekub(int a, int b){

    if(a == b) return a;

    if(a > b) a = a - b;
    else b = b - a;

    return ekub(a, b);
}

int ekuk(int a, int b){

    return a * b / ekub(a, b);
}

int main(){

    printf("%d\n", ekuk(25, 15));

    return 0;
}
