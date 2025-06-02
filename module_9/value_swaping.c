#include <stdio.h>

int main(){
    int a = 5;
    int b = 8;
    int c = a;
    a = b; 
    b = c;
    printf("a: %d \nb: %d", a, b); 
return 0;
}
