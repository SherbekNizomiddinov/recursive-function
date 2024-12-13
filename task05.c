#include <stdio.h>

int fibonacci(int n){
    if(n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){ 

    printf("%d\n", fibonacci(6));
    // 0 1 1 2 3 5 8 13

    return 0;
}
