#include <stdio.h>

int main(){
    long long int n;
    scanf("%lld", &n);

    int a[n];
    long long int sum = 0;
    long long int mod = 0;

    for(int i=0; i<n; i++){
        scanf("%1d", &a[i]);
        mod = a[i]%10;
        sum+=mod;
        a[i]/=10;
    }

    printf("%lld", sum);
    
    
return 0;
}
