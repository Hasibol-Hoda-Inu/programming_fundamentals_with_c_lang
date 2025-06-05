#include <stdio.h>
#include <limits.h>

void min_max_function(){

    int n;
    scanf("%d", &n);
    
    int arr[n];
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<min){
            min = arr[i];
        } 
        
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("%d %d", min, max);
}

int main(){

    min_max_function();
    
return 0;
}
