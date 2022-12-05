#include <stdio.h>
#include <stdlib.h>

int main(){
 
    int num[5];
    int i,j;
    for(i=0;i<5;i++){
        scanf("%d", &num[i]);
    }
    for(j=0;j<5;j++){
        printf("%d\t", num[j]);
        for(i=0;i<num[j];i++){
            if(i!=(num[j]-1)){
                printf("*");
            }
            else printf("*\n");
 
        }
    }
    return 0;
}
