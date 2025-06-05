#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char a;
    char b[100];
    char c[101];

    scanf("%c", &a);
    scanf("%s", &b);
    getchar();
    fgets(c, 101, stdin);
    
    // printf("%c\n%s\n%s", a, b, c);

    printf("%c\n", a);
    printf("%s\n", b);
    printf("%s", c);
    return 0;
}