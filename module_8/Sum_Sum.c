#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    long long int sum =0;
    long long int sum_neg = 0;
    for (int i=0; i <n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>0){
            sum+=arr[i];
            
        }else{
            sum_neg+=arr[i];
            
        }
    }

    printf("%lld ", sum);
    printf("%lld ", sum_neg);
    
return 0;
}
