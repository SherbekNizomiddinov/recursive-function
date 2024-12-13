#include <stdio.h>

void func(int i){
    
    i--;
    if(i % 2 == 0) printf("%d\n", i);

    if(i == 1) return;

    func(i - 1);
}

int main(){

    func(8);

    return 0;
}
