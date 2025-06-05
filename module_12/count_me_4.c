#include <stdio.h>
#include <string.h>

int main(){
    char str[10001];
    scanf("%s", &str);

    int l = strlen(str);
    int fre[26] = {0};

    for (int i = 0; i < l; i++)
    {
        int idx = str[i]-97;
        fre[idx]++;
    }

    for (char i = 0; i < 26; i++)
    {
       if(fre[i]>0){
        printf("%c - %d\n", i+97, fre[i]);
       }
        
    }

return 0;
}
