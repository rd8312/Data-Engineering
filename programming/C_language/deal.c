#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    int num,*s,*final,i;
    double avg=0.0;
 
    scanf("%d",&num);
 
    s=(int*)malloc(sizeof(int)*num);
    final=(int*)malloc(sizeof(int)*num);
 
    for(i=0;i<num;i++){
        scanf("%d",&s[i]);
    }
 
    for(i=0;i<num;i++){
        final[i]=s[(num-1)-i];
    }
 
    for(i=0;i<num;i++){
        printf("%d ",final[i]);
    }
    return 0;
}
