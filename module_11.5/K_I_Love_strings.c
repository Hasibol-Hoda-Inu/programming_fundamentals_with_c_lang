#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char s[51], t[51];

    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", &s, &t);

        int l_s = strlen(s);
        int l_t = strlen(t);
        int len = l_s+l_t;
    
        for (int i = 0; i<len; i++)
        {

            if(i<l_s){
                printf("%c", s[i]);
            }
            if (i<l_t)
            {
                printf("%c", t[i]);
            }
            
            
        }
            printf("\n");   
        
    }

    

return 0;
}
