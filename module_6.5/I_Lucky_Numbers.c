#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    int first = a/10;
    int b = a%10;

    if (b!=0)
    {
        if(first%b==0 || b%first==0){
            printf("YES");
        }else{
            printf("NO");
        }
    }else{
        if(b%first==0){
            printf("YES");
        }else{
            printf("NO");
        }
    }
    
    

return 0;
}
