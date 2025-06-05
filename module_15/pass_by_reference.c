#include <stdio.h>

    void fun(int* p){
        *p = 20; //Deferencing of pointer
        // printf("%p fun x\n", &p);

    }

    int main(){
        int x = 10;

        fun(&x);
        printf("%d", x);
       
        return 0;
    }

