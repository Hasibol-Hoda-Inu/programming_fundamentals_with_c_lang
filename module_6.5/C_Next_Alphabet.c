#include <stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    
    if(ch=='z'){
        printf("%c", 'z'-25);
    }else{
        printf("%c", ch+1);
    }
    

return 0;
}
