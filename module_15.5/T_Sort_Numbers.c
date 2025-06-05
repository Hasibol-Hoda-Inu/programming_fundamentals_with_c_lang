#include <stdio.h>

void ascending_order(int a, int b, int c){

    

if (a > b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

if (a > c)
{
    int temp;
    temp = a;
    a = c;
    c = temp;
}

if(b > c){
    int temp;
    temp = b;
    b = c;
    c = temp;
}

printf("%d\n%d\n%d\n", a, b, c);

}

void print_values(int a, int b, int c){
    printf("%d\n%d\n%d", a, b, c);
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    ascending_order(a,b,c);
    printf("\n");
    print_values(a, b, c);
    
return 0;
}
