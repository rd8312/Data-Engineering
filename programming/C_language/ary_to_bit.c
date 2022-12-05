#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void binary(char a);

int main(int argc, char *argv[]) {
    char str[256];
    int i, len;
    while(1){
        gets(str);
        if(str[0]=='-'&&str[1]=='1'){
            break;
        }
        len = strlen(str);
        for(i=0;i<len;i++){
            binary(str[i]);
            printf(",");
            if(i==len-1){
                printf("\n");
            }
 
        }
    }
    return 0;
}

void binary(char a){
    int bin[64];
    int unit,i,j,div;
    i = 0;
    while(a>0){
        unit = a%2;
        bin[i] = unit;
        a /= 2;
        i++;
    }
    if(i<7){
        div = 7-i;
        for(j=0;j<div;j++){
            bin[i+j] = 0;
        }
        for(j=0;j<7;j++){
            printf("%d", bin[7-1-j]);
        }
 
    }
    else{
        for(j=0;j<i;j++){
            printf("%d", bin[i-1-j]);
        }
    }
 
 
}
