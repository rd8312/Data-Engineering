#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
 
    char key;
 
    scanf(" %c", &key);
    while(key == 'y')
    {
        printf("run\n");
        scanf(" %c", &key);       
    }
 
    return 0;
}