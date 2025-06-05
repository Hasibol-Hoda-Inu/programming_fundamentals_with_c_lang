#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n-1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= star; j++)
        {
           if(i%2==0){
            printf("-");
           }else{
            printf("#");
           } 
        }
        printf("\n");
        star+=2;
        space--;
    }

    int star_o = n*2-3;
    int space_o = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space_o; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= star_o; j++)
        {

            if(n%2==0){
                if(i%2==0){
                    printf("-");
                }else{
                    printf("#");
                }
            }else{
                if(i%2==0){
                    printf("#");
                }else{
                    printf("-");
                }
            }
            
            
        }
        printf("\n");
        star_o-=2;
        space_o++;
    }
      
return 0;
}
