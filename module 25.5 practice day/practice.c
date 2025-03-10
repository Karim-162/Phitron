#include<stdio.h>
#include<string.h>
//bbbbaccddd
int main()
{
    char s[50];
    gets(s);
    int n=strlen(s);
    //printf("%d",len);
    int len=26,i,j;
    int freq[len+1];
    for(i=0; i<=len; i++)
    {
        freq[i]=0;
    }
    for(i=0; i<n; i++)
    {
        freq[s[i]-'a']++;
    }
    /*for(i=0;i<26;i++){
        printf("%c-->%d\n",97+i,freq[i]);
    }*/
    int totalch=0;
    for(i=0; i<26; i++)
    {
        if(freq[i]>=1)
        {
            totalch++;
        }
    }
    //printf("%d",totalch);
    int next=0;
    while(next!=totalch)
    {
        int max=-1,index=-1;

        char ch;
        for(i=0; i<len; i++)
        {
            if(freq[i]>max)
            {
                max=freq[i];
                ch=i+97;
                index=i;
            }
        }
        for(i=0; i<max; i++)
        {
            printf("%c",ch);
        }
        freq[index]=0;
        max=-1;
        next++;

    }
}
