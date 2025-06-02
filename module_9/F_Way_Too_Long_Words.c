#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    char str[1001];
    for (int i = 1; i <=n; i++)
    {
        scanf("%s", &str);
        if(strlen(str)<=10){
            printf("%s\n", str);
        }else{
            int bn = strlen(str);
            printf("%c%d%c\n", str[0],bn-2, str[bn-1]);
        }
    }
    
return 0;
}
