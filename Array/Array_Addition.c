#include<stdio.h>

int main(){
    //array size declearation
    int arr_size;
    printf("Enter Array Size :");
    scanf("%d",&arr_size);

    int arr1[arr_size];
    int arr2[arr_size];
    //array input
    printf("Add Value in first array\n");

    for(int i = 0; i<arr_size; i++){
        printf("Add value in position %d :",i);
        scanf("%d",&arr1[i]);
    }

    printf("Add Value in secound array\n");
    
    for(int i = 0; i<arr_size; i++){
        printf("Add value in position %d :",i);
        scanf("%d",&arr2[i]);
    }
    //array addition
    int sum_of_array[arr_size];
    for(int i = 0; i < arr_size; i++){
        sum_of_array[i] = arr1[i] + arr2[i];
    }
    //showing output
    printf("Sum of two array\n");
    for(int i = 0; i < arr_size; i++){
        printf("Sum of two array in position %d : %d\n",i,sum_of_array[i]);
    }
    return 0;
}