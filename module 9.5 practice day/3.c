#include<stdio.h>
int main()
{
    int i,n,a[50];
    scanf("%d",&n);
    int bool = 1;//yes
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]!=a[0]){
            bool=0;
            break;
        }
    }
    if(bool==1){
        printf("yes");
    }
    else{
        printf("no");
    }
}
