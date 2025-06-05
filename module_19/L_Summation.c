#include <stdio.h>

long long int func(long long int arr[], int n, int i, long long int sum){
    if (i==n)
    {
        return sum;
    }
    sum+=arr[i];
    return func(arr, n, i+1, sum);
}

int main(){
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int summation = func(arr, n, 0, 0);
    printf("%lld", summation);
    
return 0;
}
