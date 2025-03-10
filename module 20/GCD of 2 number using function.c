#include<stdio.h>

int gcd(int x,int y)
{
    int i;
    for(i=x;i>=1;i--){
        if(x%i==0&&y%i==0){
            return i;
            break;
        }
    }
}
int lcm(int x,int y)
{
    int i,gcd,lcm;
    for(i=x;i>=1;i--){
        if(x%i==0&&y%i==0){
            gcd= i;
            break;
        }
    }
    lcm=(x*y)/gcd;
    return lcm;
}
int main()
{
    int a,b,ans1,ans2;
    scanf("%d %d",&a,&b);
    int i;
    ans1= gcd(a,b);
    ans2= lcm(a,b);

    printf("the gcd is %d\n",ans1);
    printf("the lcm is %d",ans2);
}
