#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
    char file[128],name[128],file1[128]="../app/";
    int salary,sum=0,num=0;
    double avg;
    scanf("%s",file);
    strcat(file1,file);
    FILE* in;
    in = fopen(file1,"r");
    while (1){
        fscanf(in,"%s",name);
        if(feof(in)){
            break;
        }
        fscanf(in,"%d",&salary);
        printf("chef %s %d\n",name,salary);
        sum+=salary;
        num++;
    }
    fclose(in);
    avg = (double)sum/num;
    printf("Total: %d\n",sum);
    printf("Avg: %.2f",avg);
}
