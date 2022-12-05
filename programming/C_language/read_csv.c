#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main(){
    char file[128],content[128];
    int num,n=0,fail[128],i,j,temp,change=0;
    double score;
    scanf("%s",file);
    FILE* in;
    in = fopen(file,"r");
    fscanf(in,"%s",content);
    while (1){
        fscanf(in,"%s",content);
        if(feof(in)){
            break;
        }
        num=atoi(strtok(content,","));
        score= atof(strtok(NULL,","));       
        score=(sqrt(score)*11);
        if (score<60){
            fail[n]=num;
            n++;
        }
    }
    fclose(in);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(fail[j]>fail[j+1]){
                temp=fail[j];
                fail[j]=fail[j+1];
                fail[j+1]=temp;
                change=1;
            }
        }
        if(change==0){
            break;
        }
    }
    for (i=0;i<n;i++){
        if(i==0){
            printf("%d",fail[i]);
        }
        else{
            printf(" %d",fail[i]);
        }
    }
 
    return 0;
}
