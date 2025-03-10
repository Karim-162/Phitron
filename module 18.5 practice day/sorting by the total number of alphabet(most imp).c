/*
1) Take input/initialization part
2) Find the largest element from the string(string er khetre largest element hocche Z(roll number 26)
3) LargestElement+1 size er akta array niya setake 0 diya fill kortam.
4) string traverse kore frequency array er corresponding
   location increment kore dilam
5) Total koita character ache tar count ber kora.
6) Every time next largest value and tar corresponding character Filter kore niya ashle hbe
*/
#include <stdio.h>

int main()
{
    int i,largest,alphabet=0;
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    largest=26;

    int freqarra[largest+1];
    for(i=0; i<=largest; i++)
    {
        freqarra[i]=0;
    }
    for(i=0; i<=n; i++)
    {
        freqarra[(s[i]-'a')+1]+=1;
    }
    for(i=0;i<=26;i++){
        if(freqarra[i]>=1){
            alphabet++;
        }
    }
    while(alphabet!=0){
        int max=-1,index=-1;
        char ch;
        for(i=1;i<=26;i++){
            if(freqarra[i]>max){
                max=freqarra[i];
                ch=i+96;
                index=i;
            }
        }
        for(i=1;i<=max;i++){
            printf("%c",ch);
        }
        freqarra[index]=0;
        alphabet--;
    }



    return 0;
}

