#include <stdio.h>
#include <limits.h>

  int func(int arr[], int n, int i, int max){
        if(i==n){
            return max;
        }
        
        if(max < arr[i]){
            max = arr[i];
        }

        func(arr, n, i+1, max);
    }

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int ans = func(arr, n, 0, max);
    printf("%d", ans);
    
return 0;
}
