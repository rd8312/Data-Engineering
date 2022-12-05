#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int num, bag_size, buy=0, v=0;
    int *obj;
    int i;
    scanf("%d%d", &num, &bag_size);
    
	obj = (int *)malloc(sizeof(int)*num);
    for(i=0;i<num;i++){
        scanf("%d", &obj[i]);
        if(obj[i]<=bag_size){
            buy++;
            v += obj[i];
        }
    }
    
	free(obj);
    
	printf("%d %d\n", buy, v);
    return 0;
}
