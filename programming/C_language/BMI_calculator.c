#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
int main(int argc, char *argv[]) {
 
    int h, w;
    double bmi;
    scanf("%d%d", &h, &w);
 
    bmi = (double)w/ pow((double)h/100,2);
    printf("%.2f\n", bmi);
 
    if(bmi<18.5)
        printf("Underweight");
    else if(18.5<= bmi && bmi<24)
        printf("Normal");
    else if(24<=bmi && bmi<27)
        printf("Overweight");
    else if(27<=bmi && bmi<30)
        printf("Obese Class I");
    else if(30<=bmi && bmi<35)
        printf("Obese Class II");
    else
        printf("Obese Class III");   
 
    return 0;
}