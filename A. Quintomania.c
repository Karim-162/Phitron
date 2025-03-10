#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++){
    int n,i,j,count=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
            int interval=abs(a[i]-a[i+1]);
        if(interval!=5 && interval!=7){
            count=0;
        }
    }
    if(count==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
}
