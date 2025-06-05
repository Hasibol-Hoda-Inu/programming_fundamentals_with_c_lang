#include <stdio.h>
#include <string.h>

int func(char str[], int i, int count, int l){
    
    if(i==l){
        return count;
    }

    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
        count++;
    }

    func(str, i+1, count, l);
}

int main(){
    char str[201];
    fgets(str, 201, stdin);

    int l = strlen(str);

    int r = func(str, 0, 0, l);

    printf("%d", r);

return 0;
}
