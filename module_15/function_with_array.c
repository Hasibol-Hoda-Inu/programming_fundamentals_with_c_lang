#include <stdio.h>

void fun(int arr[]){
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // *(arr+1) = 200;
    arr[1] = 400;
    
}

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    fun(arr);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
return 0;
}
