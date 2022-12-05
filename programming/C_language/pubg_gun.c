#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
    char file[20];
    char gun[128],type[128];
    int i,PISTOL=0,SMG=0,SHOTGUN=0,AR=0,SNIPER=0;
    scanf("%s",file);
    FILE* in;
    in = fopen(file,"r");
    while(fscanf(in,"%s",gun)!=EOF){
        //printf("%s",gun);
        for(i=0;i<strlen(gun);i++){          
            if(gun[i] != '-'){
                type[i]=gun[i];
            }
            else{
                type[i]='\0';
                break;
            }
        }
        if(strcmp(type,"PISTOL")==0){
            PISTOL++;
        }
        if(strcmp(type,"SMG")==0){
            SMG++;
        }
        if(strcmp(type,"SHOTGUN")==0){
            SHOTGUN++;
        }
        if(strcmp(type,"AR")==0){
            AR++;
        }
        if(strcmp(type,"SNIPER")==0){
            SNIPER++;
        }      
    }
    printf("%d %d %d %d %d",PISTOL,SMG,SHOTGUN,AR,SNIPER);
    return 0;
}
