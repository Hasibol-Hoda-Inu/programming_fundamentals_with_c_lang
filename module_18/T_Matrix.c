#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    int psum =0; 
    int ssum =0;

    for (int i = 0; i < n; i++){
        for(int j = 0; j<n; j++){
            if(i==j){
                psum+=arr[i][j];
            }
        }
    } 

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i+j == n-1){
                ssum+=arr[i][j];
            }


        }
    } 

    int r = psum - ssum;
   
    if(r<0){
        r = -r;
    }
    printf("%d",r);
    // printf("%d", abs(psum-ssum));

return 0;
}
