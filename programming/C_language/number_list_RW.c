#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
    char file[20],file1[20];
    int num,sum=0,ct=0;
    double avg;
    FILE* in;
    FILE* out;
    scanf("%s",file);
    strcpy(file1,file);
    file1[0]='w';
    in=fopen(file,"r");
    out=fopen(file1,"w");
    while(fscanf(in,"%d",&num)!=EOF){
        fprintf(out,"%d ",num);
        sum+=num;
        ct++;
    }
    avg = (double)sum/ct;
    printf("%d\n%.2f",sum,avg);
    fprintf(out,"\n%d\n%.2f",sum,avg);
    fclose(in);
    fclose(out);
    return 0;
}
