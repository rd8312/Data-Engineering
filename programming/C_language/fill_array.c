#include <stdio.h>
#include "fill_array.h"
 
void fill_array(int *ptr[], int n){
    int i,j,*tem,dis;
    for (i=0;i<n;i++){
        *(ptr[i])=i;
    }
    for (i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(ptr[j]>ptr[j+1]){
                tem=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=tem;
            }   
        }
    }
    for(i=1;i<n;i++){
        dis=ptr[i]-ptr[i-1];
        for(j=1;j<dis;j++){
            *(ptr[i-1]+j)=*(ptr[i])+*(ptr[i-1]);
        }
    }
}
