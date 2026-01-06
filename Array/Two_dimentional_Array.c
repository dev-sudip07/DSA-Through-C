#include<stdio.h>

int main(){
    int row;
    int col;
    printf("enter the Rows: ");
    scanf("%d",&row);
    printf("enter the Columns: ");
    scanf("%d",&col);
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter the value in %d, %d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
