/*lets say we have a number 12739462(assumption)
 So this number can be called sazin's number if
 1)'7' must be present
 2) digit sum more than 10
 3) last digit is a prime number
*/
#include<stdio.h>
#include<math.h>
int seven_present(int n);
int digisum(int n);
int last_prime(int n);
int main()
{
    int n;
    scanf("%d",&n);
    if(seven_present(n)==1 && digisum(n)>10 && last_prime(n)==1)
    {
        printf("sazin's number");
    }
    else
    {
        printf("not sazin's number");
    }
}
int seven_present(int n)
{
    while(n!=0){
    if(n%10==7){
        return 1;
    }
        n=n/10;

    }
    return 0;
}
int digisum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int last_prime(int n)
{
    int ld=n % 10;
    if(ld==2 || ld==3 || ld==5 || ld==7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
