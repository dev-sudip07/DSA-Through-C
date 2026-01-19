#include<stdio.h>
void function_A(int);
void function_B(int);

void function_A(int n){
    if(n>0){
        printf("%d ",n);
        function_B(n-1);
    }
}

void function_B(int n){
    if(n>0){
        printf("%d ",n);
        function_A(n/2);
    }
}

int main(){
    function_A(10);
    return 0;
}