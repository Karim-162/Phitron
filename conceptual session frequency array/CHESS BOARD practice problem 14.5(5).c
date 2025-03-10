#include<stdio.h>
int main()
{
    int row=8,col=8;
    int chess[row][col];
    int i,j;
    //8X8 chess board er ghor k 0 diye fill korbo
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            chess[i][j]=0;
        }
    }
    //ekta value input nibo
    int num;
    scanf("%d",&num);

    //for(i=0;i<num;i++)
    //ebhabe for diyeo chalano jai but amra onno bhabe dekhbo ektu smart way te
    //next amra specific row,col e giye value 1 korbo
    while(num--)
    {
        int r,c;
        scanf("%d %d",&r,&c);
        chess[r][c]=1;

    }
    //ekhon ekta row dhore amra shob column iterate korbo j koita 1 ache
    for(i=0; i<row; i++)
    {
        int count=0;
        for(j=0; j<col; j++)
        {
            if(chess[i][j]==1)
            {
                count++;
            }
        }
        if(count>1)
        {
            for(j=0; j<col; j++)
            {
                chess[i][j]=0;
            }

        }
    }
    //ekhon ekta column dhore amra shob row iterate korbo j koita 1 ache
    for(j = 0; j < col; j++) // Loop through each column
    {
        int count = 0;
        for(i = 0; i < row; i++) // Count the number of 1's in the column
        {
            if(chess[i][j] == 1)
            {
                count++;
            }
        }
        if(count > 1) // If more than one 1 is found
        {
            for(i = 0; i < row; i++) // Set all values in the column to 0
            {
                chess[i][j] = 0;
            }
        }
    }
    //ekhon jegula te unique 1 ache segula print korbo
    printf("--------OUTPUT--------");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(chess[i][j]!=0){
                printf("%d %d",i,j);
            }
        }
        printf("\n");
    }


}
