#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    int num, rating,loc;
    int i;
    scanf("%d%d", &num, &rating);
    int *level;
    level = (int*)malloc(sizeof(int)*num);
    for(i=0;i<num;i++){
        scanf("%d", &level[i]);
    }
    if(num%2==0){
        loc = num/2-1;
        if(rating>level[loc]){
            printf("%d\n", level[loc]);
            printf("WINNER WINNER CHICKEN DINNER!\n");
        }
        else{
            printf("%d\n", level[loc]);
            printf("BETTER LUCK NEXT TIME!\n");
        }
    }
    else if(num%2==1){
        loc = num/2;
        if(rating>level[loc]){
            printf("%d\n", level[loc]);
            printf("WINNER WINNER CHICKEN DINNER!\n");
        }
        else{
            printf("%d\n", level[loc]);
            printf("BETTER LUCK NEXT TIME!\n");
        }
    }
    free (level);
    return 0;
}
