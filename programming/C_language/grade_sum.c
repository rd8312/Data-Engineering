#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
    FILE* eng,*math,*score;
    char english[128],ma[128],*name;
    char *sco_eng,*sco_math;
    int sum;
    eng=fopen("./english_list.csv","r");
    math=fopen("./math_list.csv","r");
    score=fopen("./Score.csv","w");
    fscanf(eng,"%s",english);
    fscanf(math,"%s",ma); 
    while (1){
        fscanf(eng,"%s",english);       
        if(feof(eng)){
            break;
        }  
        name=strtok(english,",");
        sco_eng=strtok(NULL,",");
        fscanf(math,"%s",ma);
        name=strtok(ma,",");
        sco_math=strtok(NULL,",");
        sum=atoi(sco_eng)+atoi(sco_math);
        fprintf(score,"%s,%d,\n",name,sum);
        printf("%s %d\n",name,sum);
    }
 
    fclose(eng);
    fclose(math);
    fclose(score);
    return 0;
}
