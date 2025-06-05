#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] < min){
            min = arr[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == min){
            count++;
        }
    }
    
    if (count%2 != 0)
    {
        printf("Lucky");
    }else if(count%2 == 0){
        printf("Unlucky");
    }
    















    // int f_arr[100000] = {0};

    // for (int i = 0; i < n-1; i++)
    // {
    //      f_arr[arr[i]]++;
    // }

    // int min = INT_MAX;
    // for (int i = 0; i < f_arr; i++)
    // {
    //     if(f_arr[i] < min){
    //         min = f_arr[i];
    //     }
    // }
    
    // if (min%2 == 0)
    // {
    //     printf("Lucky");
    // }else if(max%2 != 0){
    //     printf("Unlucky");
    // }
    
    
return 0;
}
