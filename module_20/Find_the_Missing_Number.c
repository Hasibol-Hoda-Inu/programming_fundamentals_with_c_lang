#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        long long int r, n1, n2, n3;
        scanf("%lld %lld %lld %lld", &r, &n1, &n2, &n3);

        long long int m = r/(n1*n2*n3);

        if ((m*n1*n2*n3)==r)
        {
            printf("%lld", m);
        }else{
            printf("-1");
        }

        printf("\n");
    }
    
    
    
return 0;
}
