#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
    int n,i,j,k,len,l,group,length;
    char temp;
    scanf("%d", &n);
    char **worker;
    char side[64];
    worker = (char **)malloc(sizeof(char*) *n);
    for(i=0;i<n;i++){
        scanf("%s", &side);
        l = strlen(side);
        worker[i] = (char *)malloc(sizeof(char) *l);
        memcpy(worker[i], side, sizeof(char)*l);
    }
    int number;
    scanf("%d", &number);
    for(j=0;j<n;j++){
        len = strlen(worker[j]);
        group = len/2;
        for(k=0;k<group;k++){
            temp = worker[j][k];
            worker[j][k] = worker[j][len-k-1];
            worker[j][len-1-k] = temp;
        }
        if(j!=n-1){
            printf("%s ", worker[j]);
        }
        else{
            printf("%s\n", worker[j]);
        }
    }
    printf("%s\n", worker[number-1]);
    return 0;
}
