#include <stdio.h>

void fun(long long int arr[], int n, int i, long long int count){

    if(i==n){
        printf("%lld", count);
        return;
    }

    count+=arr[i];

    fun(arr, n, i+1, count);
}

int main(){
    int n;
    scanf("%d", &n);

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    fun(arr, n, 0, 0);

return 0;
}
