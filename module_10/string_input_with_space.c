#include <stdio.h>

int main(){
    char str[50];
    fgets(str, 50, stdin);
    printf("%s", str); 
    printf("\n%d", str[17]);
return 0;
}
