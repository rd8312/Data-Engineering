#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    int num,max,min,max_loc,min_loc;
    int i,j,k;
    int *high;
    scanf("%d", &num);
    high = (int *)malloc(sizeof(int)*num);
    for(i=0;i<num;i++){
        scanf("%d", &high[i]);
    }
    max = 0;
    min = high[0];
    max_loc = 1;
    min_loc = 1;
    for(j=0;j<num;j++){
        if(high[j]>max){
            max = high[j];
            max_loc = j+1;
        }
    }
    for(k=0;k<num;k++){
        if(high[k]<min){
            min = high[k];
            min_loc = k+1;
        }
    }
    free(high);
    printf("%d %d\n", max_loc,max);
    printf("%d %d\n", min_loc,min);
    return 0;
}
