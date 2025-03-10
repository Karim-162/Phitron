#include<stdio.h>
int main()
{
    int n,i,j,fibonacci[105];
    scanf("%d",&n);
    fibonacci[0]=0;
    if(n>1){
        fibonacci[1]=1;
    }
    for(i=2;i<=n;i++){
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }
    for(i=0;i<n;i++){
        printf("%d ",fibonacci[i]);
    }


}

