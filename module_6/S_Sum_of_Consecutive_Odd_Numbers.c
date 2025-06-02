#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int j=1; j<=n; j++){

        int x, y;
    scanf("%d %d", &x, &y);

    int a=0;
  
    if(x>y){
        for(int i=y+1; i<x; i++){
            if(i%2!=0){
                a = a+i;
            }
        }
    }else{
        for (int i=x+1; i<y; i++)
        {
            if(i%2!=0){
                a = a+i;
            }
        }
        
    }
    
    printf("%d\n", a);

    }

return 0;
}
