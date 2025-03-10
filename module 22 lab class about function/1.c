#include<stdio.h>

void find_parity(int n)
{
    (n%2==0)?printf("even"):printf("odd");
}
int main()
{
    int n;
    scanf("%d",&n);
    find_parity(n);
    return 0;
}
