#include <stdio.h>

int main(){
    char x[21], y[21];
    scanf("%s", &x);
    scanf("%s", &y);

    // int i = 0;
    // while (1)
    // {
    //     if(x[i]=='\0' && y[i]=='\0'){
    //         break;
    //     }else if(x[i] == '\0'){
    //         printf("%s", x);
    //         break;
    //     }else if(y[i] == '\0'){
    //         printf("%s", y);
    //         break;
    //     }else if(x[i]<y[i]){
    //         printf("%s", x);
    //         break;
    //     }else if(x[i]>y[i]){
    //         printf("%s", y);
    //         break;
    //     }
    //     i++;
    // }
    
    int val = strcmp(x, y);

    if(val<0){
        printf("%s", x);
    }else if(val>0){
        printf("%s", y);
    }else{
        printf("%s", x);
    }
return 0;
}
