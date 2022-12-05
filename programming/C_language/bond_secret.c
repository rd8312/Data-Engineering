#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
    int line,n=1;
    char text[128],file[128];
    scanf("%d",&line);
    scanf("%s",file);
    FILE* in;
    in = fopen(file,"r");
    while(fscanf(in,"%s",text) != EOF){
        if((n%line) != 0){
            printf("%s ",text);
        }
        n++;
    }
    fclose(in);
    return 0;
}
