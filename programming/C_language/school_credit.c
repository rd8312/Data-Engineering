#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
    char file[128],content[128];
    char* name,*category,*credit,*grade;
    int ct=0,require=0,elective=0;
    FILE* in;
    scanf("%s",file);
    in = fopen(file,"r");
    while(1){
        fgets(content,100,in);
        if(feof(in)){
            break;
        }
        name = strtok(content,",");
        category = strtok(NULL,",");
        credit = strtok(NULL,",");
        grade = strtok(NULL,",");       
        if (ct!=0){
            if(strcmp(grade,"F") < 0){       
                if(strcmp(category,"R")==0){               
                    require += atoi(credit);
                }
                if(strcmp(category,"E")==0){
                    elective += atoi(credit);
                }
            }
        }
        ct++;
    }
    fclose(in);
    printf("Required: %d\n",require);
    printf("Elective: %d\n",elective);
    if(require >= 72 && elective >= 28){
        printf("Y");
    }
    else{
        printf("N\n");
        if(require < 72 && elective < 28){
            printf("Student still needs to complete %d required credits & %d elective credits for graduation.",72-require,28-elective);
        }
        else if(require < 72){
            printf("Student still needs to complete %d required credits for graduation.",72-require);
        }
        else if(elective < 28){
            printf("Student still needs to complete %d elective credits for graduation.",28-elective);
        }
 
    }
    return 0;
}
