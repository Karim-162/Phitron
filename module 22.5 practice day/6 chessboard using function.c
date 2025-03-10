#include<stdio.h>
#define n 8
void initializeChessboard(int chess[n][n])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            chess[i][j]=0;
        }
    }
}
void markPositions(int chess[n][n],int num)
{
    int r,c;
    while(num--)
    {
        scanf("%d %d",&r,&c);
        chess[r][c]=1;
    }
}

void rowXcol(int chess[n][n])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        int count=0;
        for(j=0; j<n; j++)
        {
            if(chess[i][j]!=0)
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
}
void colXrow(int chess[n][n])
{
    int i,j;
    for(j=0; j<n; j++)
    {
        int count=0;
        for(i=0; i<n; i++)
        {
            if(chess[i][j]!=0)
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
}
void updated_board(int chess[n][n])
{
    int i,j;
    for(i=0; i<n; i++)
    {

        for(j=0; j<n; j++)
        {
            if(chess[i][j]!=0)
            {
                printf("%d %d",i,j);
            }

        }
        printf("\n");
    }
}
int main()
{
    int chess[n][n];
    int num;
    scanf("%d",&num);
    initializeChessboard(chess);
    markPositions(chess,num);
    rowXcol(chess);
    colXrow(chess);
    updated_board(chess);
}
