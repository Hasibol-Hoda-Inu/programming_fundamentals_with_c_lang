#include <stdio.h>


int main(){
int n;
scanf("%d", &n);

int star = 1;
int li = n+5 - (n/2);
int space = li-1;

for(int i = 1; i <= li; i++)
{
    for (int j = 1; j <= space; j++){
        printf(" ");
    }
    for(int j = 1; j <= star; j++){
        printf("*");
}
printf("\n");
star+=2;
space--;

}

for (int i = 1; i <= 5; i++)

{
    for (int j = 1; j <= 5; j++){
        printf(" ");
    }
    for (int j = 1; j <= n; j++){
        printf("*");
    }
printf("\n");
}

return 0;
}