#include <stdio.h>

// void m(int p, int q){
//     int temp = p;
//     p = q;
//     q = temp;
// }
int main(){
    int ary[4] = {1, 2, 3, 4};
    int* p;
    p = ary+3;
    *p = 5;

    printf("%d\n", ary[3]);    
return 0;
}
