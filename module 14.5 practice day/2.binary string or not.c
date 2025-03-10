#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,j,n,pos=0;
    scanf("%s",&s);
    int isbinary=1;

    int len=strlen(s);
    for(i=0;i<len;i++){

        if(s[i]!='0'&&s[i]!='1'){
            isbinary=0;
            break;
        }

    }
    if(isbinary==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

