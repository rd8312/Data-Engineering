#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;    
    scanf("%d", &n);

    if(n%12==0){
        printf("%d dozen\n", n/12);
    }
    else
    {
        printf("%d dozen and %d\n", n/12, n%12);
    }

    return 0;
}