#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, r;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &r);
    bool flag = false;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j] == r){
                flag = true;
            }
        }
    }
    if (flag)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
return 0;
}
