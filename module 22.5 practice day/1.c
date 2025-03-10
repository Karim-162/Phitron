#include<stdio.h>
#include<string.h>
int is_binary_string(char str[])
{
    int i,flag=1;
    for(i=0;str[i]!='\0';i++){
        if(str[i]!='0'&& str[i]!='1')
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100];
    gets(str);
    (is_binary_string(str))?printf("YES"):printf("NO");

}
