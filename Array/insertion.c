#include<stdio.h>

int main(){
    int arr[10] = {10,20,30,40};
    int n = 4;       //size of Array   
    int pos = 2;     //in which position to add the value
    int value = 25;  // the Value to add

    for(int i=n;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;

    for(int j=0;j<n;j++){
        printf("%d,",arr[j]);
    }
    return 0;
}