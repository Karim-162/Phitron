#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int Q,index,value;
    scanf("%d",&Q);
    for(j=0;j<Q;j++){
        scanf("%d %d",&index,&value);
        a[index]+=value;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
