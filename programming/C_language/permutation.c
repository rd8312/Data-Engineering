#include<stdio.h>
#include<stdlib.h>
 
void p(int n,int m);
void c(int n,int m);
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    p(n,m);
    c(n,m);
}
void p(int n,int m){
    int ans=1,i;
    for(i=n;i>n-m;i--){
        ans*=i;
    }
    if(n<m){
        ans=0;
    }
    printf("%d\n",ans);
}
void c(int n,int m){
    int ans=1,i;
    for(i=n;i>n-m;i--){
        ans*=i;
    }
    for(i=1;i<=m;i++){
        ans/=i;
    }
    if(n<m){
        ans=0;
    }
    printf("%d\n",ans);
}
