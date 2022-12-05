#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
int main(){
 
    int n, i, pos;
    scanf("%d", &n);
 
    for(i=5;i>=1;i--){
        if(n>99999 || n<1){
            printf("out of range");
            break;
        }
 
        pos = n/(int)pow(10,i-1) %10;
        if(pos==0 && i!=1)
            continue;
        switch(pos)
        {
            case 1:
                printf("壹");
                break;
            case 2:
                printf("貳");
                break;
            case 3:
                printf("參");
                break;
            case 4:
                printf("肆");
                break;
            case 5:
                printf("伍");
                break;
            case 6:
                printf("陸");
                break;
            case 7:
                printf("柒");
                break;
            case 8:
                printf("捌");
                break;
            case 9:
                printf("玖");
                break;   
        }
        switch(i){
            case 5:
                printf("萬");
                break;
            case 4:
                printf("仟");
                break;
            case 3:
                printf("佰");
                break;
            case 2:
                printf("拾");
                break;
            case 1:
                printf("元整");
                break;           
        }   
    }
    return 0;
}