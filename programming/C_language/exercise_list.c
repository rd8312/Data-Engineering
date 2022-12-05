#include<stdio.h>
#include<stdlib.h>
 
int main(){
    char file[20];
    int num,i,time,sum=0;
    FILE* in;
    scanf("%s",file);
    in = fopen (file,"r");
    fscanf(in,"%d",&num);
    for(i=0;i<num;i++){
        fscanf(in,"%d",&time);
        if(time<30){
            time+=5;
        }
        else if(time<120){
            time+=20;
        }
        else{
            time=0;
        }
        sum+=time;
    }
    printf("%d minutes",sum);
    fclose(in);
}
