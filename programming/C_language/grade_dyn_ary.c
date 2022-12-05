#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    int num;
    int i;
    double sum, avg;
    sum = 0;
    scanf("%d", &num);
    double *student;
    student = (double*)malloc(sizeof(double)*num);
    for(i=0;i<num;i++){
        scanf("%lf", &student[i]);
        avg = student[i]/num;
        sum += avg;
    }
    printf("avg = %.2f\n", sum);
    printf("fail:\n");
    for(i=0;i<num;i++){
        if(student[i]<60){
            printf("%d: %.0f\n", i+1, student[i]);
        }
    }
    printf("highest:\n");
    int max = 0;
    int max_loc = 1;
    for(i=0;i<num;i++){
        if(student[i]>max){
            max = student[i];
            max_loc = i+1;
        }
    }
    free(student);
    printf("%d: %d\n", max_loc, max);
    return 0;
}
