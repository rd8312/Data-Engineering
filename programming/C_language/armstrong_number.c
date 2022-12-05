#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 
 
int main(){
 
    int n, m, i, j;
    int sum, pos, digit, count=0;
    scanf("%d%d", &n, &m);
 
    for(i=n;i<=m;i++){
        sum=0; digit=0;
        for(j=6;j>=1;j--){
            pos = i/(int)pow(10,j-1)%10;
            if(sum==0 && pos!=0){
                digit = j;
                sum+=pow(pos,digit);
            }
            else if(sum!=0)
                sum+=pow(pos,digit);
        }
        if(i==sum){
            count+=1;
            if(count==1)
                printf("%d", i);
            else
                printf(" & %d", i);
        }   
    }
    if(count==0)
        printf("none");
    return 0;
}