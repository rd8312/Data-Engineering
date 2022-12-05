#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    int num, i, j, k, temp, change;
    scanf("%d", &num);
    int *ptr;
 
    ptr=(int *)malloc(sizeof(int)*num);
 
    for(i=0;i<num;i++){
        scanf("%d", &ptr[i]);
    }
 
    for(j=num;j>0;j--){
        change=0;
        for(i=0;i<j-1;i++){
            if(ptr[i]>ptr[i+1]){
                temp=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=temp;
                change=1;
            }
        }
        if(change==0){
            break;
        }
      }
    for(k=0;k<num;k++){
        printf("%d ", ptr[k]);
    }
 
    free(ptr);
    return 0;
}
