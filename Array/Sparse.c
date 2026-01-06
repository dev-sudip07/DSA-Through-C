#include<stdio.h>

int main(){
    int row;
    int col;
    printf("Enter the Row of the Matrix");
    scanf("%d",&row);
    printf("Enter the Coloumn of the Matrix");
    scanf("%d",&col);
    
    int matrix[row][col];

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            printf("Enter the value in Matrix [%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    int sparce[10][3];
    int k = 0;

    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){   
            if(matrix[i][j] != 0){
                sparce[k][0] = i;
                sparce[k][1] = j;
                sparce[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    printf("Row  Col  Value\n");
    for(int i = 0; i < k; i++){
        printf("%3d %3d %5d \n",sparce[i][0],sparce[i][1],sparce[i][2]);
    }
    return 0;
}