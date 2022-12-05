#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
 
    double n1, n2, ans;
    char op;
    scanf("%lf%lf", &n1, &n2);
    scanf(" %c", &op);
 
    switch(op){
        case '+':
            ans = n1 + n2;
            break;
        case '-':
            ans = n1 - n2;
            break;
        case '*':
            ans = n1 * n2;
            break;
        case '/':
            ans = n1/n2;
            break;       
    }
    printf("%.2f %c %.2f = %.2f", n1, op, n2, ans);
 
 
    return 0;
}