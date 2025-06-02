#include <stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    for(int j=1; j<=t; j++){
        long long int f;
        long long int r=1;
        scanf("%lld", &f);

        for(int i=1; i<=f;i++){
            r = r*i;
        }
        printf("%lld\n", r);
    }
    
return 0;
}
