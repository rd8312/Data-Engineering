#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2, i, j;
    int result;
    scanf("%d", &n1);
    scanf("%d", &n2);
    for(i=1;i<n1+1;i++){
        for(j=1;j<n2+1;j++){
            result = i*j;
            printf("%d*%d=%2d ", i, j, result);
        }
        printf("\n");
    }
    return 0;
}