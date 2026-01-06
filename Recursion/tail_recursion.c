#include<stdio.h>
void Tail_recursion(int n){
    if(n==0){
        return;
    }
    else{
        printf("%d ",n);
        Tail_recursion(n-1);   // Recursive call is the last operation
    }
}

int main(){
    Tail_recursion(5);
    return 0;
}