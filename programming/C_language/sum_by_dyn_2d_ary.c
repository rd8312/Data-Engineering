#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    int m,n;
    double sum;
    int i,j;
    double avg,avg_all;
    double all = 0;
    scanf("%d%d", &m, &n);
    double **student;
    student = (double **)malloc(sizeof(double*)*m);
    for(i=0;i<m;i++){
        student[i] = (double *)malloc(sizeof(double)*n);
 
    }
 
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%lf", &student[i][j]);
 
        }
    }
 
    for(i=0;i<m;i++){
        sum = 0;
        printf("class %d\n", i+1);
        for(j=0;j<n;j++){
            avg = student[i][j]/n;
            sum += avg;
            printf(" %d: %.0f\n", j+1, student[i][j]);
        }
        all += sum;
        printf(" avg: %.2f\n", sum);
    }
    free(student);
    avg_all = all/m;
    printf("avg: %.2f\n", avg_all);
    return 0;
}
