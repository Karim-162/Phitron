#include<stdio.h>
int main()
{
    int n,i,j,a[105],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

        printf("%d",a[k]);


}
