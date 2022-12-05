#include<stdio.h>
#include<stdlib.h>
 
struct Pokemon{
    char Name[30];
    int Lv;
    int Hp;
};
int main(){
    int i,level,ct=0;
    struct Pokemon pokemon[3];
    for(i=0;i<3;i++){
        scanf("%s",&pokemon[i].Name);
        scanf("%d",&pokemon[i].Lv);
        scanf("%d",&pokemon[i].Hp);
    }
    scanf("%d",&level);
    for(i=0;i<3;i++){
        if(pokemon[i].Lv >= level){
            printf("Name: %s\n",pokemon[i].Name);
            printf("Lv: %d\n",pokemon[i].Lv);
            printf("HP: %d\n\n",pokemon[i].Hp);
            ct++;
        }
    }
    if(ct==0){
        printf("not found\n");
    }
}
