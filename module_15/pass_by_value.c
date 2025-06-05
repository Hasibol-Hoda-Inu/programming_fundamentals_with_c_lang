#include <stdio.h>

    int fun(int x){
        x = 20;
        printf("%p fun x\n", &x);
        return x;
    }

    int main(){
        int x = 10;
        int moja = fun(x);
        printf("%p main x\n", &x);
        printf("%p", &moja);
       
        return 0;
    }

