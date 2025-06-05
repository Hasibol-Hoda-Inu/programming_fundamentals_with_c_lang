#include <stdio.h>

void func(int n){
    if(n==0){
        return;
    }
    func(n/10);
    int r = n%10;
    printf("%d ", r);
}

int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if(n==0){
            printf("0");
        }
        func(n);
        printf("\n");
    }
    
return 0;
}
