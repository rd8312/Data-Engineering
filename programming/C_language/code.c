#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    int n;
    int i,j;
    scanf("%d", &n);
    int *number;
    number = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d", &number[i]);
    }
    int half = n/2;
    int temp;
    for(i=0;i<half;i++){
        temp = number[2*i];
        number[2*i] = number[2*i+1];
        number[2*i+1] = temp;
    }
    for(j=0;j<n;j++){
        if(j!=n-1){
            printf("%d ", number[j]);
        }
        else{
            printf("%d \n", number[j]);
        }
 
    }
    free(number);
 
    return 0;
}
