#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    char str[256];
    int i,j;
    while(1){
        gets(str);
        if(str[0] == '-'&str[1] == '1'){
            break;
        }
        int len = strlen(str);
        for(i=0;i<len;i++){
            if(str[i]>='a'& str[i]<'z'){
                str[i] -= 32;
            }
            if(str[i]=='\0'){
                break;
            }
        }
        puts(str);
    }
    return 0;
}
