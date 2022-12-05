#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 
 
int main(){
 
    int A, B, i, a, b, c;
    double C, avg, sd;
    scanf("%d%d%lf", &A, &B, &C);
 
    for(i=3;i>=0;i--){
        a = A /(int)pow(10,i) % 10;
        b = B /(int)pow(10,i) % 10;
        c = (int)C /(int)pow(10,i) % 10;
        avg = (double)(a+b+c)/3;
        sd = sqrt((pow(a-avg, 2)+pow(b-avg, 2)+pow(c-avg, 2))/3);
        printf("%d %.2f %.2f\n", a+b+c, avg, sd);
    }
 
    double Avg = (A+B+C)/3.0;
    double Sd = sqrt((pow(A-Avg, 2)+pow(B-Avg, 2)+pow(C-Avg, 2))/3);
    printf("%.2f %.2f %.2f\n", A+B+C, Avg, Sd);
 
    return 0;
}