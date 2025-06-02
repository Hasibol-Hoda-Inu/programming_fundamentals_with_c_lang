#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        int k= (n+1)-i;
        for(int j=1; j<=n; j++){
            if (j<=(n+1)-i) 
            {
                printf("%d",k);
                k--;
            }

            printf(" ");
        }
        printf("\n");
    }
return 0;
}
