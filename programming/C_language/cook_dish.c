#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
 
    int n, x, y;
    int temp=20;

    scanf("%d%d%d", &n, &x, &y);
 
    if(n%2==1){
        temp = temp + (x-y)*(n/2) + x;
    }
    else
    {
        temp = temp + (x-y)*(n/2-1) + x;    
    }
    printf("%d\n", temp);
 
    return 0;
}