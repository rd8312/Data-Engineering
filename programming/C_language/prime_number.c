#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
 
    int m, i, j;
    scanf("%d", &m);
 
    printf("2 is prime\n");
    for(i=2;i<=m;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
                break;
            else if(j==i-1 && i%j!=0)
                printf("%d is prime\n", i);
        }
    }
 
    return 0;
}