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

    int isPDiagonal = 1;
    int isSDiagonal = 1;

    if(r==c){
        for (int i = 0; i < r; i++){
            for(int j = 0; j<c; j++){
                if(i!=j){
                    if(arr[i][j]!=0){
                        isPDiagonal = 0;
                    }
                }
                if(i==j){
                    if (arr[i][j] == 0)
                    {
                        isPDiagonal = 0;
                    }
                    
                }
            }
        } 

        for (int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(i+j!=r-1){
                    if(arr[i][j]!=0){
                        isSDiagonal = 0;
                    }
                }
                if(i+j == r-1){
                  if(arr[i][j] == 0){
                    isSDiagonal = 0;
                  }
                }
            }
        } 
}


    
    if(isPDiagonal == 1 && r==c){
        printf("This is a primary diagonal metrix");
    }else if(isSDiagonal == 1 && r==c){
        printf("This is a secendory/off diagonal metrix");
    }else{
        printf("This is not a diagonal matrix");
    }
    
   
return 0;
}
