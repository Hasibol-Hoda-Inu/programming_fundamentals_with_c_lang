#include <stdio.h>
#include <limits.h>

int main(){
    int a, k;
    scanf("%d %d", &a, &k);

    long long int arr[a];
    long long int sum = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%lld", &arr[i]);
    }


    /// descending order selection sort 

    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (arr[i] < arr[j])
            {
                long long int temp = 0;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < k; i++)
    {
        if (arr[i] > 0)
        {
            sum+=arr[i];
        }
    
    }
    

    printf("%lld", sum);
    
    
return 0;
}




