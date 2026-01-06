#include<stdio.h>
void direct_recursion(int n){
    if(n>0){
        printf("%d ",n);
        direct_recursion(n-1);
    }
}
int main(){
    direct_recursion(5);
    return 0;
}