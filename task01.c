#include <stdio.h>

void func(int n){

    printf("%d-start\n", n);

    if(n != 1)
        func(n - 1);

    printf("%d-end\n", n);
}

int main(){ 

    func(5);

    return 0;
}
