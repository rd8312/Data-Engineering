#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
int main(int argc, char *argv[]) {
    int time = 0;
    int len1, len2, num1,length;
    int i,j,k;
    int single;
    char str1[256];
    char str2[256];
    char all[256][256];
    gets(str1);
    char *token1;
    token1 = strtok(str1,";");
    while(token1){
        len1 = strlen(token1);
        memcpy(all[time], token1, sizeof(char)*len1);
        time++;
        num1 = time;
        token1 = strtok(NULL, ";");
    }
    gets(str2);
    char *token2;
    token2 = strtok(str2,",");
    while(token2){
        len2 = strlen(token2);
        for(i=0;i<num1;i++){
            if(strcmp(token2, all[i])!=0){
                single = 1;
            }
            else{
                single = 0;
                break;
            }   
        }
        if(single==1){
            memcpy(all[time], token2, sizeof(char)*len2);
            time++;
        }
        token2 = strtok(NULL, ",");
    }
    int ref, latter, former, tem;
    char temp[64];
    for(i=0;i<time;i++){
        for(j=0;j<time-1;j++){
            if(strcmp(all[j],all[j+1])>0){
                strcpy(temp,all[j]);
                strcpy(all[j],all[j+1]);
                strcpy(all[j+1],temp);
            }
        }
    }
 
 
    for(i=0;i<time;i++){
        if(i!=time-1){
            printf("%s ", all[i]);
        }
        else{
            printf("%s\n", all[i]);
        }
    }
    return 0;
}
