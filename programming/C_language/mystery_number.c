#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 
 
int main(int argc, char *argv[]) {
 
    int n, m, i, j, pos;
    scanf("%d%d", &n, &m);
 
    int count=0;
    for(i=n;i<=m;i++){
        if(i%7==0){
            count+=1;
            if(count==1)
                printf("%d", i);
            else
                printf(" & %d", i);
        }
    }
 
    count=0;
    for(i=n;i<=m;i++){
        for(j=4;j>=1;j--){
            pos = i/(int)pow(10,j-1)%10;
            if(pos==7){
                count+=1;
                if(count==1)
                    printf("\n%d", i);
                else
                    printf(" & %d", i);
                break;
            }
        }
    }   
    return 0;
}