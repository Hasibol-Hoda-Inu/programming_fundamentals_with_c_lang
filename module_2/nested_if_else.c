#include <stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);
    if(tk>=5000){
        printf("Coxs Bazar jabo");
        tk = tk - 5000;
        if(tk>=10000){
            printf("\nSaint martin jabo");
        }else{
            printf("\nSaint martin jabo na");
        }
    }else{
        printf("Kothao jabo na");
    }
    return 0;
}