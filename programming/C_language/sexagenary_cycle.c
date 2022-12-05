#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void YEAR(char array[]);
 
int main(int argc, char *argv[]) {
    char year[100][5], temp[100][5];
    int j;
    int i = 0;
    int total;
    while(1){
        gets(temp[i]);
        if(temp[i][0]=='q'){
            break;
        }
        else{
            strcpy(year[i], temp[i]);
            i++;
        }
    }
    total = i;
    for(j=0;j<total;j++){
        YEAR(year[j]);
    }
 
    return 0;
}


void YEAR(char array[]){
    int num,a,b;
    num = atof(array);
    a = (num-3)%10;
    b = (num-3)%12;
    printf("%s = ", array);
    if(a==1){printf("¥Ò");}
    else if(a==2){printf("¤A");}
    else if(a==3){printf("¤þ");}
    else if(a==4){printf("¤B");}
    else if(a==5){printf("¥³");}
    else if(a==6){printf("¤v");}
    else if(a==7){printf("©°");}
    else if(a==8){printf("¨¯");}
    else if(a==9){printf("¤Ð");}
    else if(a==0){printf("¬Ñ");}
    if(b==1){printf("¤l");}
    else if(b==2){printf("¤¡");}
    else if(b==3){printf("±G");}
    else if(b==4){printf("¥f");}
    else if(b==5){printf("¨°");}
    else if(b==6){printf("¤x");}
    else if(b==7){printf("¤È");}
    else if(b==8){printf("¥¼");}
    else if(b==9){printf("¥Ó");}
    else if(b==10){printf("¨»");}
    else if(b==11){printf("¦¦");}
    else if(b==0){printf("¥è");}
    printf("¦~\n");
}
