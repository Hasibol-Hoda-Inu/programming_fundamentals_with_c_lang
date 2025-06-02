#include <stdio.h>

int main(){
    char s[1001], t[1001];
    scanf("%s", &s);
    scanf("%s", &t);

    int s_count = 0;
    for (int i = 0; s[i]!='\0'; i++)
    {
        s_count++;
    }
    int t_count = strlen(t);

    printf("%d %d\n", s_count, t_count);
    printf("%s %s", s, t);
    
return 0;
}
