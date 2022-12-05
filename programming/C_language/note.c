#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
    char str[256];
    char new[256][256];
    int i,j,k,l,len2;
    k = -1;
    int end;
    end = 0;
    while(1){
        scanf("%s", &str);
        int len = strlen(str);
        if(str[0]=='-'&&str[1]=='1'){
            end = 1;
        }
        for(i=0;i<len;i++){
 
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
                str[i] -= 3;
                if(str[i]>='A'&&str[i]<='Z'){
                    str[i] += 32;
                }
 
                if(str[i]>'Z'&&str[i]<'a'){
                    str[i] += 26;
                }
                else if(str[i]<'A'){
                    str[i] += 35;
                }
            }
 
        }
        if(end==0){
            k++;
            memcpy(new[k], str, sizeof(char)*len);
 
        }
 
 
        if(end==1){
            for(l=0;l<k+1;l++){
                if(l!=k){
                    printf("%s ", new[l]);
                }
                else{
                    printf("%s\n", new[l]);
                }
            }
            break;
        }
    }
    return 0;
}
