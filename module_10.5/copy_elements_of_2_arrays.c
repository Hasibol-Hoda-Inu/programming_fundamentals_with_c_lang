#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int arr_n[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr_n[i]);
    }
    
    int m;
    scanf("%d", &m);

    int arr_m[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr_m[i]);

    }

    int arr[n+m];
    for (int i = 0; i <n; i++)
    {
        arr[i] = arr_n[i];
    }

    for (int i = 0; i < m; i++)
    {
        arr[i+n] = arr_m[i];
    }
    
    for (int i = 0; i <n+m; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
return 0;
}
