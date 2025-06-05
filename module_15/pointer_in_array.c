#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    *(arr+3) = 400;
    printf("%p\n", &arr[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("%p\n", arr);
    printf("%d", *arr); // Deferencing the array it will print the 0th index value cs the array starts from there
    
return 0;
}
