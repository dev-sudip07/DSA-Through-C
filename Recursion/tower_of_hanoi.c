#include<stdio.h>

void Hanoi(int n, char from, char to, char via){
    if(n==1){
        printf("Disk %d from %c to %c\n",n,from,to);
    }
    else{
        Hanoi(n-1,from,via,to);

        printf("Disk %d from %c to %c\n",n,from,to);

        Hanoi(n-1,via,to,from);
    }
}
int main(){
    int n= 64;
    char from = 'A';
    char to = 'C';
    char via = 'B';

    Hanoi(n,from,to,via);
    return 0;
}