#include <stdio.h>
#include <stdlib.h>

int main(){

    int student, score;
    // printf("input your grade :");
    scanf("%d", &student);
    // printf("input your score :");
    scanf("%d", &score);

    if(student==1 && score<60){
        printf("fail\n");
    } 
    else if(student==2 && score<70){
        printf("fail");
    }
    else{
        printf("pass");
    }

    return 0;
}