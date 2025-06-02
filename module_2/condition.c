#include <stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);
    if(tk >=100){
        printf("Biriyani khabo");
    }else if(tk >= 50 && tk < 100){
        printf("Fuchka khabo");
    }else{
        printf("kichui khabo na");
    }
    return 0;
}