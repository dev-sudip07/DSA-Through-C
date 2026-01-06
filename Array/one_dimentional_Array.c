#include<stdio.h>

int main(){
    int n;
    printf("Definr Array size: ");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter the value of Array in %d index: ",i);
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}