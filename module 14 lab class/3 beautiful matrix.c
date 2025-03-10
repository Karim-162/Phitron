#include<stdio.h>
int main()
{
    int n=5,i,j,row_c,col_c,x,y,ans=0;
    //scanf("%d",&n);
    int a[5][5];
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                x=i;
                y=j;//x,y mane
            }

        }
    }
    //postion change point
    if(x>2){
        row_c=x-2;
    }
    else{
        row_c=2-x;
    }
    if(y>2){
        col_c=y-2;
    }
    else{
        col_c=2-y;
    }
    /*row_c=abs(x-2);
    col_c=abs(y-2);*/
    ans=row_c+col_c;
    printf("%d",ans);
}
