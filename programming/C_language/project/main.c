#include "score.h"
#include <stdio.h>
#include <stdlib.h>

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