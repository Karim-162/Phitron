#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,j,n[100];
    int len=strlen(s);
    for(i=0; i<len; i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    for(i=0; i<len; i++)
    {
        for(j=i; j<=i; j++)
        {

            if(s[i]>='a'&&s[i]<='z')
            {
                s[i]-=96;
                n[j]=s[i];
            }
        }
    }
    int count=0;
    for(j=0; j<len; j++)
    {
        count+=n[j];

    }
    printf("%d\n",count);
    if(count&&((count&count-1)==0)){
        printf("it is power of two");
    }
    else{
        printf("it is not power of two");
    }

    //printf("%d",s[i]);
    //printf("%s",s);
}
