#include <stdio.h>

int main(){
    char str[1001];
    scanf("%s", &str);
    
    int l = strlen(str);

    for(int i=0, j= l-1; i<j; i++, j--){

        int tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        if(str[i]!=str[j]){
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    
    
return 0;
}
