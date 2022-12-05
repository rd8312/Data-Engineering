#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
 
    int coin, bottle;
    scanf("%d", &coin);
 
    bottle = coin + coin/3;
    printf("%d\n", bottle);
 
    return 0;
}