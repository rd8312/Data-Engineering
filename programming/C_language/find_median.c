#include <stdio.h>
#include <stdlib.h>

int main(){
 
    int num, i, mid=0;
    int former, latter, center;
    scanf("%d", &num);
    
	int ary[num];

    for(i=0;i<num;i++)
	{
        scanf("%d", &ary[i]);
    }
    
    int sum = 0;
    if(num%2==0)
	{
		former = num/2-1;
        latter = num/2;
        mid = (int) ((float) (ary[former] + ary[latter])/2  + 0.5);
	}
    else if(num%2==1)
	{
		center = (num-1) /2;
		mid = ary[center];
	}
	
    printf("%d\n", mid);
    return 0;
}
