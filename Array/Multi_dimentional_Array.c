#include<stdio.h>

int main(){
    int r;
    int c;
    int p;
    printf("Enter the Multi Dimentional Array Size: ");
    scanf("%d",&r);
    printf("Enter the Multi Dimentional Array Size: ");
    scanf("%d",&c);
    printf("Enter the Multi Dimentional Array Size: ");
    scanf("%d",&p);
    int arr[r][c][p];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            for(int l = 0; l < p; l++){
                printf("Enter Array Value in %d, %d, %d : ",i,j,l);
                scanf("%d",&arr[i][j][l]);
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            for(int l = 0; l < p; l++){
                printf("%d ",arr[i][j][l]);
            }
            printf("  ");
        }
        printf("\n"); 
    }
    return 0;
}