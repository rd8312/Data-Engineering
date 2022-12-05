#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char *argv[]) {
 
    int rnum;
    scanf("%d",&rnum);
 
    char obj[rnum][100];
    int rec[rnum];
    char recitem[rnum][100][100];
 
    int i,j,k,inum = 0;
    for(i=0;i<rnum;i++)
	{
        scanf(" %s",obj[i]);
        scanf("%d",&rec[i]);
        for(j=0;j<rec[i];j++)
		{
            scanf(" %s",recitem[i][j]);
        }
    }
 
    int schnum;
    scanf("%d",&schnum);
    char schitem[schnum][2][100];
    for(i=0;i<schnum;i++)
	{
        scanf(" %s",schitem[i][0]);
        scanf(" %s",schitem[i][1]);
    }
 
    int samennum;
    for(i=0;i<schnum;i++)
	{
        int code0,code1;
        for(j=0;j<rnum;j++)
		{
            if(strcmp(schitem[i][0],obj[j])==0)
			{
                code0 = j;
            }
            if(strcmp(schitem[i][1],obj[j])==0)
			{
                code1 = j;
            }
        }
        samennum = 0;
        char sameitem[100][100];
        for(j=0;j<rec[code0];j++)
		{
            for(k=0;k<rec[code1];k++)
			{
                if(strcmp(recitem[code0][j],recitem[code1][k])==0)
				{
                    strcpy(sameitem[samennum],recitem[code1][k]);
                    samennum++;
                }
            }
        }
 
        char tmp[100];
        for(j=samennum;j>1;j--)
		{
            for(k=0;k<j-1;k++)
			{
                if(strcmp(sameitem[k],sameitem[k+1])>0)
				{
                    strcpy(tmp,sameitem[k]);
                    strcpy(sameitem[k],sameitem[k+1]);
                    strcpy(sameitem[k+1],tmp);
                }
            }
        }
 
        if(samennum!=0)
		{
            for(j=0;j<samennum;j++)
			{
                if(j!=samennum-1)
				{
                    printf("%s ",sameitem[j]);
                }
                else{
                    printf("%s",sameitem[j]);
                }
            }
        }
        else
		{
            printf("nothing");
        }
        printf("\n");
    }
 
    return 0;
}
