#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int is_number(char a);

int main(int argc, char *argv[]) {
    char str[256];
    int i,number;
    while(1){
        gets(str);
        int len = strlen(str);
        for(i=0;i<len;i++){
            if(is_number(str[i])==0){
                number = 0;
                break;
            }
            else{
                number = 1;
            }
        }
        if(number==0){
            printf("is not a number\n");
        }
        else{
            printf("n=");
            puts(str);
            break;
        }
    }
 
    return 0;
}

int is_number(char a){
    int yes = 0;
    if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'||a=='0'){
        yes = 1;
    }
    return yes;
}
