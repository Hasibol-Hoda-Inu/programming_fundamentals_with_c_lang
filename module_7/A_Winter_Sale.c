#include <stdio.h>


int main(){
    int y;
    float x;
    scanf("%f %d", &x, &y);
    
    float price = 100/(100-x)*y;
    printf("%0.2f", price);

return 0;
}
