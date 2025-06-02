#include <stdio.h>

int main(){
    int x,y,z; 

    scanf("%d %d %d", &x, &y, &z);

    if(x<y && x<z){
        printf("%d ", x);
        if(y<z){
            printf("%d", z);
        }else{
            printf("%d", y);
        }
    }else if(y<z){
        printf("%d ", y); 
        if(x<z){
            printf("%d", z);
        }else{
            printf("%d", x);
        }
    }else{
        printf("%d ", z); 
        if(x<y){
            printf("%d", y);
        }else{
            printf("%d", x);
        }
    }

return 0;
}
