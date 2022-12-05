#include <stdio.h>
#include <stdlib.h>
#include "competition.h"
 
void competition(int *a,int n){
    int i,tem;
    if(n%2==0){
        for(i=0;i<(n/2);i++){
            tem=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=tem;
        }
    }
    else{
        for(i=0;i<(n/2);i++){
            tem=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=tem;
        }
    }
}
