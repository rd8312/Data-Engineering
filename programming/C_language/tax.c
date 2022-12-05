#include <stdio.h>
#include <stdlib.h>
 
 
int main(int argc, char *argv[]) {
 
    int N, J, K, L, M;
    scanf("%d", &N);
 
    if(N<=540000){
        J = 5;
        L = 0;
    }
    else if(N<=1210000){
        J = 12;
        L = 37800;
    }
    else if(N<=2420000){
        J = 20;
        L = 134600;
    }
    else if(N<=4530000){
        J = 30;
        L = 376600;
    }
    else if(N<=10310000){
        J = 40;
        L = 829600;
    }
    else{
        J = 45;
        L = 1345100;   
    }
 
    K = N*(J*0.01);
    M = K-L;
 
    printf("%d%% %d %d %d ", J, K, L, M);
 
    return 0;
}