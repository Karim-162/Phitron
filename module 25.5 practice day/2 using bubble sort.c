#include<stdio.h>
int main()
{
    int ara[100],i,n,j,temp;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int k;
    scanf("%d",&k);
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(ara[i]>ara[i+1])
            {
                temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++)
        {
            if(i==k)
            {
                printf("%d\n",ara[k-1]);
                break;
            }

        }
    printf("%d\n",ara[n-k]);
    /*
    7
    1 5 5 2 2 3 9
    4
    */

}

