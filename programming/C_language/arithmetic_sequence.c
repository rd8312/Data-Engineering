#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    int a1, d, n, current;
    int sum = 0;
    scanf("%d%d%d", &a1, &d, &n);
    int i;
    for(i=0;i<n;i++){
        current = a1 + d*i;
        sum += current;
        if(i!=n-1){
            if(current>=0){
                printf("%d + ", current);
            }
            else{
                printf("(%d) + ", current);
            }
        }
        else if(i==n-1){
            if(current>=0){
                printf("%d = ", current);
            }
            else{
                printf("(%d) = ", current);
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
