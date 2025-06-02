#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }


    for (int i = 0; i <n; i++)
    {                 
        if(max == arr[i]){
                   
            arr[i] = min;
                      
        }else if(min == arr[i]){
                         
            arr[i] = max;
                      
        }
        
    }

    for (int i = 0; i <n; i++)
    {
        printf("%d ", arr[i]);
    }
    

return 0;
}
