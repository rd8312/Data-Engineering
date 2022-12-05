#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    char str[64];
    int integer;
    double num,sum,unit;
    sum = 0;
    while(1){
        num = 0;
        gets(str);
        if(strcmp(str,"q")==0){
            break;
        }
        unit = atof(str);
        if(unit>1||unit<(-1)){
            integer = (int)unit;
            num = unit-integer;
        }
        else if(unit<1&&unit>(-1)){
            num = unit;
        }
        sum += num;
    }
    printf("%.2f", sum);
    return 0;
}
