#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int m1, m2, d;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        int n_t = (m1*d)/(m1+m2);
        int r = d-n_t;
        printf("%d\n", r);
    }

    
    
return 0;
}
