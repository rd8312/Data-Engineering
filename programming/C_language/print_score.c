#include<stdio.h>
#include<stdlib.h>

void printAry(int n, int *P);
double Avg(int n, int *p);
int MaxScore(int n, int *p);

int main()
{
    //int score[5] = {11, 22, 33, 44, 55};
    int *score, n;
    int i;
    scanf("%d", &n);
    score = (int *)malloc(sizeof(int)*n);
    for (i = 0; i < n; i++){
        scanf("%d", score+i);
    }
    
    printAry(n, score);
    printf("avg = %0.2f\n", Avg(n, score));
    int MPos = MaxScore(n, score);
    printf("%d: %d\n", MPos+1, score[MPos]);
    
    free(score);
    return 0;
}

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