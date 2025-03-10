#include<stdio.h>

void pow_of_2(int n)
{
    if((n && ((n & (n - 1)) == 0)&&(n!=1)))
    {
        printf("YES");
    }
    else
        printf("NO");

}
int main()
{
    char s[100];
    scanf("%s",&s);
    //printf("%s",s);
    int len;
    len=strlen(s);
    printf("%d\n",len);
    int i,j,freq[27];
    for(i=0; i<=26; i++)
    {
        freq[i]=0;
    }

    int n=0;
    for(i=0; i<=len; i++)
    {
        freq[(s[i]-'a')+1]++;
    }
    for(i=0; i<=26; i++)
    {
        printf("%d ",freq[i]);
    }
    printf("\n");
    for(i=0; i<=26; i++)
    {
        if(freq[i]!=0)
        {
            for(j=0; j<freq[i]; j++)
            {
                n+=i;
            }

        }
    }
    printf("%d\n",n);
    pow_of_2(n);

}
