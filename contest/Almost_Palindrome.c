#include <stdio.h>
#include <string.h>

int main(){

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
    char str[1001];
    scanf("%s", &str);
    
    int l = strlen(str);

    int count = 0;

    int i = 0;
    int j = l-1;
    while (i<j)
    {
        if (str[i] != str[j])
        {
            count++;
        }else{
            i++;
        }
            j--;
    }
    
    printf("%d\n", count);
    }
    


    
return 0;
}
