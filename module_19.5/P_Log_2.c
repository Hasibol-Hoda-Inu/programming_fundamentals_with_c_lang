#include <stdio.h>

long long int logarithm(long long int n){
    
     if(n <= 1)
    {
        return 0;
    }
    return 1 + logarithm(n/2);
    // long long int r = 0;
    // return r = log(n)/log(2);
}

int main(){
    long long int n;
    scanf("%lld", &n);

    long long int r = logarithm(n); 
    printf("%lld", r);
return 0;
}
