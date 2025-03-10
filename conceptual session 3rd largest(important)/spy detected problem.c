// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n,t,i,j,index=0;
    scanf("%d",&t);
    for(int j=0; j<t; j++)
    {
        scanf("%d",&n);
        int oa[n+1];
        for(i=1; i<=n; i++)
        {
            scanf("%d",&oa[i]);
        }
        int largest=100;
        //int m_ind=0;
        /*for(i=1;i<=n;i++){
            if(oa[i]>largest){
                largest=oa[i];
            }
        }*/
        int na[largest+1];
        for(i=1; i<=largest; i++)
        {
            na[i]=0;
        }
        for(i=1; i<=n; i++)
        {
            na[oa[i]]+=1;
        }
        for(i=1; i<=n; i++)
        {
            if(na[oa[i]]==1)
            {
                index=i;
                break;
            }
        }
        printf("%d\n",index);

    }

    return 0;
}
