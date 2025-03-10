#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], r[100];
    int t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%s", s);

        int i, j;
        int len = strlen(s);

        // Reverse the string
        for (j = 0, i = len - 1; i >= 0; i--, j++)
        {
            r[j] = s[i];
        }
        r[j] = '\0'; // Add null terminator to the reversed string

        int d = strcmp(s, r); // Compare the original and reversed strings
        if (d == 0)           // Correct condition: 0 means strings are equal
        {
            if (len <= 7)
            {
                printf("Case #3: %s\n", s);
            }
            else
            {
                printf("Case #2: %c%d%c\n", s[0], len - 2, s[len - 1]);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n", s);
        }
    }

    return 0;
}
