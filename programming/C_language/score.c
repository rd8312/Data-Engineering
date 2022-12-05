#include <stdio.h>
#include <stdlib.h>
#include "score.h"
void inputAry(int n, int *P){
    int i;
 
    for(i=0;i<n;i++){
        scanf("%d",&P[i]);
    }
}
double Avg(int n, int *P){
    int i;
    double sum;
    for(i=0;i<n;i++){
        sum+=P[i];
    }
    return sum/n;
}
int MaxScore(int n, int *P){
    int i,high=0,num=0;
    for(i=0;i<n;i++){
        if(P[i]>high){
            high=P[i];
            num=i+1;
        }
    }
    printf("highest:\n%d:",num);
    return high;
}
