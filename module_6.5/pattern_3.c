#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        char k= 64+i;

        for(int j=1; j<=n; j++){
            if (j<=i) 
            {
                printf("%c", k);
        
            }

            printf(" ");
        }
        printf("\n");
    }
return 0;
}
