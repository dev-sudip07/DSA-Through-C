#include<stdio.h>
int fibanocco(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibanocco(n-1)+fibanocco(n-2);
    }
}

int main(){
    int n;
    printf("Enter the steps of Fibanocco:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d,",fibanocco(i));
    }
    return 0;
}