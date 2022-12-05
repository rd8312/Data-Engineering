#include <stdio.h>
#include <stdlib.h>
#include "safe.h"
 
int safe(int array[5][5]){
    int i,j,x,y,up=6,right=6,down=6,left=6;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if (array[i][j]==2){
                x=i;
                y=j;
            }
        }
    }
    for(i=x;i>=0;i--){
        if (array[i][y]==1){
            up = x-i;
            break;
        }
    }
    for(i=y;i<5;i++){
        if (array[x][i]==1){
            right = i-y;
            break;
        }
    }
 
    for(i=x;i<5;i++){
        if (array[i][y]==1){
            down = i-x;
            break;
        }
    }
    for(i=y;i>=0;i--){
        if (array[x][i]==1){
            left=y-i;
        }
    }
    if(up <= right && up <= down && up <=left){
        return 1;
    }
    else if(right <= down && right <= left ){
        return 2;
    }
    else if(down <= left){
        return 3;
    }
    else{
        return 4;
    }
}
