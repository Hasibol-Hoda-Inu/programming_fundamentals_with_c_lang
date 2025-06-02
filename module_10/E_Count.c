#include <stdio.h>
#include <string.h>

int main(){
    char str[1000001];
    scanf("%s", &str);

    int l = strlen(str);
    int count = 0;

    for (int i = 0; i<l; i++)
    {
      
        count += str[i]-'0';
    }
    printf("%d", count);
    
return 0;
}
