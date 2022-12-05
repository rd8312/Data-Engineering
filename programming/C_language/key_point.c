#include <stdio.h>
#include <stdlib.h>
 
 
int main() {
 
    int L, S;
    int count=0;
    scanf("%d%d", &L, &S);
 
    while(S!=L){
        if(S<L)
            S += 5;
        else
            S -= 2;
        count+=1;
    }
    
    printf("%d\n", count);
 
    return 0;
}