#include <stdio.h>
#include <string.h>

int main(){
    char str[100001];
    scanf("%s", &str);
    
    int fre[26] = {0};
    int l = strlen(str);
    
    for (int i = 0; i <l; i++)
    {
        int idx = str[i]-97;
        fre[idx]++;
    }
    
    for (int i = 0; i <26; i++)
    {
        if(fre[i]>0){
            printf("%c : %d\n",i+97, fre[i]);
        }
        
    }
    
    
return 0;
}
