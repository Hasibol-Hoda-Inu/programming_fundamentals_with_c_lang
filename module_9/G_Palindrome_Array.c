#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for(int i=0, j= n-1; i<j; i++, j--){

        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        if(arr[i]!=arr[j]){
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    
    
return 0;
}
