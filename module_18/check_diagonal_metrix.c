#include <stdio.h>

int main(){
    int r,c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    int isPDiagonal = 0;
    int isSDiagonal = 0;

    if(r==c){
        for (int i = 0; i < r; i++){
        for(int j = 0; j<c; j++){
            if(i!=j){
                if(arr[i][j]!=0){
                    isPDiagonal++;
                }
            }
        }
    } 

    for (int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i+j!=r-1){
                if(arr[i][j]!=0){
                    isSDiagonal++;
                }
            }


        }
    } 
}


    
    if(isPDiagonal != 0 && isSDiagonal != 0 || r!=c){
        printf("This is not a diagonal metrix");
    }else{
        printf("This is a diagonal metrix");
    }
    
    
return 0;
}
