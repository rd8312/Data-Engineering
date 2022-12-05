#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **score;
    int h, w, i, j;

    scanf("%d", &h);
    scanf("%d", &w);
    score = (int **)malloc(sizeof(int *)*h);
    for(i=0; i < h; i++)
    {
        score[i] = (int *)malloc(sizeof(int)*w);
    }

    int ct = 1;
    for(i=0; i<h; i++)
    {
        for(j=0;j<w;j++)
        {
            score[i][j] = ct;
            ct++;
        }
    }
    
    
    for(i=0; i<h; i++)
    {
        for(j=0;j<w;j++)
        {
            printf("%d ", score[i][j]);
        }
        puts("");
    }

    for(i=0; i < h; i++)
    {
        free(score[i]);
    }
    free(score);

    return 0;
}