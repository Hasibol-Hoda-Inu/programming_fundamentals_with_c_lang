#include <stdio.h>

int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    // printf("%s %s", &a, &b);
    int l = strlen(b);
    for (int i = 0; i <= l; i++)
    {
        a[i] = b[i];
    }

    printf("%s %s", a, b);
    
return 0;
}
 