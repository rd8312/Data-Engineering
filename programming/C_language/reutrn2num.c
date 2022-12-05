#include<stdio.h>
#include<stdlib.h>
 
void return2num(int n, int *factRst, int *sumRst);
 
int main(){
    int n,fact, sum;
    scanf("%d",&n);
    return2num(n,&fact,&sum);
 
}
void return2num(int n, int *factRst, int *sumRst){
    int i,ans=1;
    for(i=1;i<=n;i++){
        ans*= i;
    }
    *factRst = ans;
    *sumRst = (n+1)*n/2;
    printf("%d\n%d\n",*factRst,*sumRst);
}
