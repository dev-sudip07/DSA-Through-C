#include<stdio.h>

#define MAX 10

typedef struct{
    int row;
    int col;
    int value;
}Triple;

void CreateMatrix(int matrix[MAX][MAX], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Enter the Value in [%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}

void PrintMatrix(int matrix[MAX][MAX], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
           printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }
}

int MatrixToSparse(int matrix[MAX][MAX], int rows, int cols, Triple sparse[]){
    int k = 0;
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){   
            if(matrix[i][j] != 0){
                sparse[k].row = i;
                sparse[k].col = j;
                sparse[k].value = matrix[i][j];
                k++;
            }
        }
    }
    return k;
}

void PrintSparse(Triple sparse[], int size){
    printf("Row  Col  Value\n");
    for(int i = 0; i < size; i++){
        printf("%3d %3d %5d \n",sparse[i].row,sparse[i].col,sparse[i].value);
    }
}

int SparseAddition(Triple a[], int sizeA, Triple b[], int sizeB, Triple result[]){
    int i = 0, j = 0, k = 0;
    while(i < sizeA && j < sizeB){
        if(a[i].row == b[j].row && a[i].col == b[j].col){
            result[k] = a[i];
            result[k].value = a[i].value + b[j].value;
            i++;
            j++;
            k++;
        }
        else if(a[i].row < b[j].row || a[i].row == b[j].row && a[i].col < b[j].col){
            result[k++] = a[i++];
        }
        else{
            result[k++] = b[j++];
        }
    }

    while(i < sizeA){
        result[k++] = a[i++];
    }
    while(j < sizeB){
        result[k++] = b[j++];
    }
    return k;
}

void Sparse_to_Matrix(Triple sparse[], int size, int matrix[MAX][MAX]){
    for(int i = 0; i < size; i++){
        matrix[sparse[i].row][sparse[i].col] = sparse[i].value;
    }
}
int main(){
    int rows, cols;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    Triple sparseA[MAX], sparseB[MAX], sparseC[MAX];
    int sizeA, sizeB, sizeC;

    printf("Entr the Rows of Matrix: ");
    scanf("%d",&rows);
    printf("Entr the Coloumns of Matrix: ");
    scanf("%d",&cols);

    printf("Enter the Value of Matrix A:\n");
    CreateMatrix(A, rows, cols);
    
    printf("Enter the Value of Matrix B:\n");
    CreateMatrix(B, rows, cols);

    printf("This is Matrix A:\n");
    PrintMatrix(A, rows, cols);

    printf("This is Matrix B:\n");
    PrintMatrix(B, rows, cols);

    sizeA = MatrixToSparse(A, rows, cols, sparseA);
    sizeB = MatrixToSparse(B, rows, cols, sparseB);

    printf("The Sparse of Matrix A:\n");
    PrintSparse(sparseA, sizeA);

    printf("The Sparse of Matrix B:\n");
    PrintSparse(sparseB, sizeB);

    sizeC = SparseAddition(sparseA, sizeA, sparseB, sizeB, sparseC);

    printf("The Sparse of Matrix C:\n");
    PrintSparse(sparseC, sizeC);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            C[i][j] = 0;
        }
    }
    Sparse_to_Matrix(sparseC, sizeC, C);

    printf("Final Matrix C = A+B\n");
    PrintMatrix(C, rows, cols);
    
    return 0;
}