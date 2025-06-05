#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int d_2 =0, d_3=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            d_2++;
        }else if(arr[i]%3==0){
            d_3++;
        }else if(arr[i]%2==0 && arr[i]%3==0){
            d_2++;
        }
    }
    printf("%d %d", d_2, d_3);
    
return 0;
}
