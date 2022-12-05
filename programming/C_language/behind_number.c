#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 
int main(){
 
    char n, n_last='0';
    int count=0;
 
    do{
        scanf(" %c", &n);
        if(n=='9' && n_last=='1')
            count += 1;
        n_last = n;   
    }while(n!='q');
    printf("%d\n", count);
 
    return 0;
}