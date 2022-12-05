#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    int num,*s,i,j=0;
    double avg=0.0;
 
    scanf("%d",&num);
 
    s=(int*)malloc(sizeof(int)*num);
 
    for(i=0;i<num;i++){
        scanf("%d",&s[i]);
    }
 
    for(i=0;i<num;i++){
        avg+=s[i];
    }
 
    avg=avg/num;
 
    for(i=0;i<num;i++){
        if(s[i]>avg){
            j+=1;
        }
    }
 
    printf("%d\n",j);
    return 0;
}
