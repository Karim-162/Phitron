#include<stdio.h>
int main()
{
    int n,i,j,a[105],temp=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            temp+=a[i];
        }
    }
    if(temp%2==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
