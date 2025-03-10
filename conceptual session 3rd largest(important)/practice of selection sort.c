// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n,t,i,j,index=0,min,m_ind;

    scanf("%d",&n);
    int oa[n+1];
    int na[n+1];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&oa[i]);
    }

    for(j=1; j<=n; j++)
    {
        min=oa[0];
        m_ind=0;
        for(i=1; i<=n; i++)
        {
            if(oa[i]<min)
            {
                min=oa[i];
                m_ind=i;
            }
        }
        na[j]=min;
        oa[m_ind]=9999;
        for(i=1; i<=n; i++){
            printf("%d ",oa[i]);
        }
        printf("\n");
    }




    return 0;
}

