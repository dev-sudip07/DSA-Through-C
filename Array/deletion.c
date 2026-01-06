#include<stdio.h>

int main(){
    int arr[10] = {10,20,30,40};
    int n = 4;   //size of the array
    int pos = 1; //position to remove

    for(int i=pos; i<n; i++){
        arr[i] = arr[i+1];
    }
    n--;

    for(int j=0;j<n;j++){
        printf("%d,",arr[j]);
    }
    return 0;
}