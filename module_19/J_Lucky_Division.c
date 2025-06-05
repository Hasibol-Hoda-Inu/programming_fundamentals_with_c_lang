#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    // printf("mod: %d\n", n%10);
    // printf("division: %d\n", n/10);

    int is_lucky = 1;
    int temp = n;

    int i = 1;
    while (n>0)
    {
        int div = n%10;
        if(div != 4 && div != 7)
        {
            is_lucky = 0;
        }    
        n/=10;
    }
    
    // printf("%d\n", is_lucky);
    n = temp;

    if(is_lucky != 1){
        if(n%4 == 0 || n%7 == 0 || n%44 == 0 || n%47 == 0 || n%74 == 0 || n%77 == 0 || n%444 == 0 || n%447 == 0 || n%474 == 0 || n%744 == 0 || n%777 == 0){
            is_lucky = 1;
        }else{
            is_lucky = 0;
        }
    }

    
    if(is_lucky){
        printf("YES");
    }else{
        printf("NO");
    }
    
return 0;
}
