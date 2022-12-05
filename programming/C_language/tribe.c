#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
    FILE* in;
    int i,j,tem;
    int num[1000];
    char s[128],file1[128]="../app/",file2[128]="../app/";
    scanf("%s",s);
    strcat(file1,s);
    in = fopen(file1, "r");
 
    int ing,ct=0;
    while(1){
        fscanf(in,"%d",&num[ct]);            
        if(feof(in)){
            break;
        }
        ct++;  
    }
    fclose(in);
    scanf(" %s",s);
    strcat(file2,s);
    in = fopen(file2,"r");
    while(1){
        fscanf(in,"%d",&ing);
        if(feof(in)){
            break;
        }
        num[ct]=ing;
        ct++;
    }
    fclose(in);
    for(i=0;i<ct-1;i++){
        for(j=0;j<ct-i-1;j++){
            if(num[j]>num[j+1]){
                tem=num[j];
                num[j]=num[j+1];
                num[j+1]=tem;
            }
        }
    }
    for(i=0;i<ct;i++){
        printf("%d ",num[i]);
    }
    puts("");
    return 0;
}
