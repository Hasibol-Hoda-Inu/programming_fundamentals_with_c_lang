#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[101];
    scanf("%s", str);

    int l = strlen(str);
    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < l; i+=2)
    {
        even_sum+= str[i] - '0';
    }
    // printf("%d\n", even_sum);

    for (int i = 1; i < l; i+=2)
    {
        odd_sum+= str[i] - '0';
    }
    // printf("%d", odd_sum);

    int ad = abs(even_sum - odd_sum);
    if (ad%11 == 0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    






























    // char m[101] = str;

    // long long int right_sum = 0;
    // while (n>0)
    // {
    //     // printf("%d\n", n%10);
    //     right_sum+= n%10;
    //     n/=100;
    // }
    // // printf("%d\n", right_sum);

    // long long int left_sum = 0;
    // while (m>0)
    // {
    //     long long int temp = m%100;
    //     // printf("%d\n", temp);

    //     left_sum+= temp/=10;
    //     // printf("%d\n", temp);
    //     m/=100;
    // }
    // // printf("%d\n", left_sum);
    

    // if (abs(n-m)%11 == 0)
    // {
    //     printf("YES");
    // }else{
    //     printf("NO");
    // }
    
    
return 0;
}
