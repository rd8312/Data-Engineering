#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    char str[256];
    int end = 0;
    int i,len;
    while(1){
        gets(str);
        if(str[0]=='-'&&str[1]=='1'){
            end = 1;
        }
        len = strlen(str);
        for(i=0;i<len;i++){
            if(str[i]=='b'){
                str[i] = 'd';
                continue;
            }
            if(str[i]=='d'){
                str[i] = 'b';
                continue;
            }
            if(str[i]=='p'){
                str[i] = 'q';
                continue;
            }
            if(str[i]=='q'){
                str[i] = 'p';
                continue;
            }
        }
        if(end==0){
            puts(str);
        }
        else{
            break;
        }
    }
    return 0;
}
