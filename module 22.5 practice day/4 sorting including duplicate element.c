#include<stdio.h>
void sort_freq_array(int n,int a[])
{
    int i=0,j;
    int max=a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int na[max+1];
    for(i=0; i<=max; i++)
    {
        na[i]=0;
    }

    //printf("%d",max);
    for(i=0; i<n; i++)
    {
        na[a[i]]+=1;
    }
    for(i=1; i<=max; i++)
    {
        if(na[i]>=1)
        {

            for(j=1; j<=na[i]; j++)
            {
                printf("%d ",i);
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    int i=0,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    sort_freq_array(n,a);

}
