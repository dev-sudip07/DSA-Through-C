#include<stdio.h>
void Tail_recursion(int n){
    if(n==0){
        return;
    }
    else{
        Tail_recursion(n-1);   // Recursive call not the last operation
        printf("%d ",n);      //Work done *after* the call
    }
}

int main(){
    Tail_recursion(5);
    return 0;
}