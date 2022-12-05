#include "score.h"
#include <stdio.h>
#include <stdlib.h>

double Avg(int n, int *P)
{
    int sum = 0;
    int i;
    for (i=0;i<n;i++){
        sum += P[i];
    }
    return (double) sum/n;

}

int MaxScore(int n, int *P)
{
    int MP = 0;
    int i;
    for (i=0;i<n;i++){
        if(P[i]>P[MP])
            MP = i;
    }
    return MP;
}

void printAry(int n, int *P){

    int i;
    for(i=0;i<n;i++){
        printf("%d ", P[i]);
    }
    puts("");
}