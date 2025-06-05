#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int a_arr[n];
        int b_arr[n];
        int c_arr[n];

        for (int i = 0; i < n; i++)
    {
        scanf("%d", &a_arr[i]);
    
        b_arr[i] = a_arr[i];     
    }

        for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(b_arr[i]>b_arr[j]){
                int temp;
                temp = b_arr[j];
                b_arr[j] = b_arr[i];
                b_arr[i] = temp;
            }
        }
        
    }

        for (int i = 0; i < n; i++)
    {
        c_arr[i] = a_arr[i] - b_arr[i];
        printf("%d ", abs(c_arr[i]));
    }
    printf("\n");
    }
     
return 0;
}
