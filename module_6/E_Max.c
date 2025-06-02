#include <stdio.h>

int main(){
    int n;
    int num;

    scanf("%d", &n);
    
    int max =0;

    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        if(num>max){
            max = num;
        }
    }
    printf("%d", max);
return 0;
}
