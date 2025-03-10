#include<stdio.h>
int main()
{
    int n,i,j,k,a[105],temp;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);

    }
    scanf("%d",&k);
    for(i=1; i<=n-1; i++)
    {
        for(j=1;j<=n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
    printf("%d",a[k]);
    /*for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }*/


}

