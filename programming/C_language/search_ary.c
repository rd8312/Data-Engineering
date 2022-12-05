#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    char a[1000];
    char b[1000];
    gets(a);
    int n = strlen(a);
    gets(b);
    int m = strlen(b);
    int i, j, k = 1;
    for(i = 0; i < n - m; i ++){
        k = 1;
        for(j = 0; j < m; j ++){
            //printf("%c %c",a[i + j], b[j]);
            //printf("%d\n", a[i + j] != b[j]);
            if(a[i + j] != b[j]){
                k = 0;
            }   
        }
 
        if(k == 1){
            printf("%d\t", i);
            int l;
            for(l = i - 2; l < i + m + 2; l ++){
                if(l == i || l == i + m){
                    printf("+");
                }
                printf("%c", a[l]);
            }
            puts("");
        }
    }
 
    return 0;
}
