#include<stdio.h>
#include<stdlib.h>

void printAry(int n, int *P);

int main(){

    int a1[5] = {11, 22, 33, 44, 55};
    int a2[3] = {77, 88, 99};

    printAry(5, a1);
    printAry(3, a2);
    return 0;
}

void printAry(int n, int *P){

    int i;
    for(i=0;i<n;i++){
        printf("%d ", P[i]);
    }
    puts("");
}
 