#include<stdio.h>
#include<stdlib.h>
 
struct people{
    char name[50];
    char phone[50];
    char email[50];
};
int main(){
    int ct=0;
    struct people person[50];
 
    while(1){
        char a,file[80];
        int i,num;
        FILE* save;
        FILE* out;
        scanf("%c",&a);
        if(a=='q'){
            break;
        }
        switch(a){
            case 'i':
                scanf("%s",&person[ct].name);
                scanf("%s",&person[ct].phone);
                scanf("%s",&person[ct].email);
                ct++;
                break;
            case 'l':
                if(ct==0){
                    printf("No data.\n");
                    break;
                }
                for(i=0;i<ct;i++){
                    printf("#%d\n",i+1);
                    printf("Name: %s\n",person[i].name);
                    printf("Phone: %s\n",person[i].phone);
                    printf("Email: %s\n",person[i].email);
                }
                break;
            case 's':
                scanf("%s",file);
                save = fopen(file,"w");
                fprintf(save,"%d\n",ct);
                for(i=0;i<ct;i++){
                    fprintf(save,"%s\t%s\t%s\n",person[i].name,person[i].phone,person[i].email);
                }
                fclose(save);
                break;
            case 'o':
                scanf("%s",file);
                out = fopen(file,"r");
                fscanf(out,"%d\n",&ct);
                for(i=0;i<ct;i++){
                    fscanf(out,"%s ",&person[i].name);
                    fscanf(out,"%s ",&person[i].phone);
                    fscanf(out,"%s ",&person[i].email);
                }
                if(feof(out)){
                    break;
                }
                fclose(out);
                break;
            case 'c':
                ct=0;
                break;
        }
    }
    return 0;
}
