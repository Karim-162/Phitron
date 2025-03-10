#include<stdio.h>

int main()
{
    int n=8;
    int chess[n][n];
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            chess[i][j]=0;
        }
    }
    int num,r,c;
    scanf("%d",&num);
    while(num--)
    {
        scanf("%d %d",&r,&c);
        chess[r][c]=1;
    }
    for(i=0; i<n; i++)
    {
        int count=0;
        for(j=0; j<n; j++)
        {

            if(chess[i][j]==1)
            {
                count++;
            }
        }
        if(count>1)
        {
            for(j=0; j<n; j++)
            {
                chess[i][j]=0;
            }
        }

    }
    for(j=0; j<n; j++)
    {
        int count=0;
        for(i=0; i<n; i++)
        {
            int count=0;
            if(chess[i][j]==1)
            {
                count++;
            }
        }
        if(count>1)
        {
            for(i=0; i<n; i++)
            {
                chess[i][j]=0;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(chess[i][j]==1){
                printf("%d %d",i,j);
            }
        }
        printf("\n");
    }
}
