#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ind=1;
    int min = arr[0];

    for (int i=1; i<n; i++){
        if (min>arr[i]){
                   
            min = arr[i]; 
            ind = i+1; 
        }
        
    }
    

    printf("%d ", min);
    printf("%d", ind);
    
    
return 0;
}
