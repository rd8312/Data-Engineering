#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
 
    int n, i;
    int sum=0;
    scanf("%d", &n);
 
    for(i=1;i<=n;i++){
        sum +=i;
 
        if(i==n){
            printf("%d = %d\n", i, sum);
            break;
        }
         
        printf("%d+", i);  
        
    }
 
    return 0;
}