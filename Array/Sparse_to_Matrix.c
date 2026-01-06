#include<stdio.h>

int main(){
    int sparce[10][3] = {{0,2,3},{1,1,2},{1,2,1},{2,1,2},{2,2,5}};
    int k = 5;
    printf("Row  Col  Value\n");
    for(int i = 0; i < k; i++){
        printf("%3d %3d %5d \n",sparce[i][0],sparce[i][1],sparce[i][2]);
    }

    int matrix[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrix[i][j] = 0;
        }
    }
    for(int i = 0; i < k; i++){
        matrix[sparce[i][0]][sparce[i][1]] = sparce[i][2];
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}