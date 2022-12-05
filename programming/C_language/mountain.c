#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 
 
int main(int argc, char *argv[]) {
 
    char start;
    int h, h_last=0, t=0;
 
    scanf(" %c", &start);
    while(scanf("%d", &h)==1){
        if(h>h_last)
            t+=10*(h-h_last);
        else if(h==h_last)
            t+=5;
        else
            t+=6*(h_last-h);
        h_last = h;   
    }
    if(h_last<0)
        t+=10*(0-h_last);
    else if(h_last==0)
        t+=5;
    else
        t+=6*(h_last-0);
 
    printf("%d", t);
 
    return 0;
}