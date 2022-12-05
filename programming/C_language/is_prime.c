#include "prime.h"
 
int IsPrime(int n){
    int i;
    int num,isprime;
    if(n==2||n==1){
        isprime = 0;
    }
    else{
        for(i=2;i<n;i++){
            num = n%i;
            if(num==0){
                isprime = 0;
                break;
            }
            else{
                isprime = 1;
            }
        }
    }
 
    return isprime;
}
