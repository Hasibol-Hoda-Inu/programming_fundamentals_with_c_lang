#include <stdio.h>

long long int func(int n){
    
    if(n==1){
        return 1;
    }
    
    long long int mul = func(n-1);
    return mul*n;
}

int main(){
    int n;
    scanf("%d", &n);

    long long int r = func(n);
    printf("%lld", r);
return 0;
}
