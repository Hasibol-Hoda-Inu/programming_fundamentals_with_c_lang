#include <stdio.h>

int sum(int num1, int num2){
    int ans = num1+num2;
    return ans;
}

int main(){
    int result = sum(10, 12);
    printf("%d", result);
return 0;
}