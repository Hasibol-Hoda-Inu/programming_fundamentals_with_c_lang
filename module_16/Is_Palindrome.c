#include <stdio.h>
#include <string.h>


int is_palindrome(char str[]){
    int l = strlen(str);
    int ans = 1;

        int i = 0;
        int j = l-1;
        while (i<j)
        {
            if (str[i]==str[j])
            {
                ans = 1;
            }else{
                ans = 0;
                return ans;
            }
            i++;
            j--;
        }
        
        return ans;
  
}

int main(){
    char s[1001];
    scanf("%s", &s);

    int ans = is_palindrome(s);
    if(ans==1){
        printf("Palindrome");
    }else if(ans == 0){
        printf("Not Palindrome");
    }
return 0;
}
