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
    // int isSDiagonal = 1;
    int isEqualPD = 1;
    // int isEqualSD = 1;

    if(r==c){
        for (int i = 0; i < r; i++){
            for(int j = 0; j<c; j++){
                if(i!=j){
                    if(arr[i][j]!=0){
                        isPDiagonal = 0;
                    }
                }   
            }
        } 

        for (int i = 0; i < r-1; i++){
            for(int j = 0; j < c-1; j++){
                if(i==j){
                    if(arr[i][j] != 1){
                        isEqualPD = 0;
                    }
                }   
            }
        } 

        // for (int i = 0; i < r; i++){
        //     for(int j = 0; j < c; j++){
        //         if(i+j!=r-1){
        //             if(arr[i][j]!=0){
        //                 isSDiagonal = 0;
        //             }
        //         }
        //     }
        // } 

        // for (int i = 0; i < r-1; i++){
        //     for(int j = 0; j < c-1; j++){
        //         if(i+j == r-1){
        //             if(arr[i][j] != 1){
        //                 isEqualSD = 0;
        //             }
        //         }
        //     }
        // }
}


    
    if(isPDiagonal && isEqualPD && r==c){
        printf("This is a unit matrix");
    }else{
        printf("This is not a unit matrix");
    }
    
    
return 0;
}
