#include <stdio.h>
char checkString(char s1[10], char s2[10])
{
    int answer = 1;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[j] != s2[j])
            {
                answer = 0;
            }
        }
    }
    return answer;
}
