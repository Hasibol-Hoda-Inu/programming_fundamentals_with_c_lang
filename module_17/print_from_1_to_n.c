#include <stdio.h>

/// TOPIC: Recursion

void hello(int n, int i){
    
    if(i==n){       // Base Case
        return; 
    }
    hello(n,i+1);
    printf("%d\n", i);
}

int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
    hello(n, i);
return 0;
}
