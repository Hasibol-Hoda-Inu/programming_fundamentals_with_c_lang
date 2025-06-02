#include <stdio.h>
#include <stdbool.h>

int main(){
    int num = 29;
    long long int i = 1000000;

    float osthir = 29.32;
    double d = 23232332.32323232;

    char g;
    scanf("%c", &g);
    char name[] = "Enu";

    bool boolean = true;

    printf("intiger = %d\n", num);
    printf("long long intiger = %lld\n", i);

    printf("float = %.2f\n", osthir);
    printf("double = %lf\n", d);

    printf("%c\n", g);
    printf("string = %s\n", name);

    printf("boolean = %d", boolean);
    return 0;
}