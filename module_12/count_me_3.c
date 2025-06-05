#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char str[10001];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &str);
        int l = strlen(str);
        int ca = 0, sa = 0, d = 0;
        for (int i = 0; i <l; i++)
        {
            if(str[i]>='A' && str[i]<='Z'){
                ca++;
            } 
            if(str[i]>='a' && str[i]<='z'){
                sa++;
            } 
            if(str[i]>='0' && str[i]<='9'){
                d++;
            }
        }
        printf("%d %d %d\n", ca, sa, d);
        
    }

    
return 0;
}
