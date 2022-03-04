#include <stdio.h>
char checkString(char s1[10], char s2[10])
{
    char *s_ptr1, *s_ptr2;
    s_ptr1 = s1;
    s_ptr2 = s2;
    int *ptr_a;
    int answer = 1;
    ptr_a = &answer;
    for (int i = 0; *(s_ptr1 + i) != '\0'; i++)
    {
        for (int j = 0; *(s_ptr2 + j) != '\0'; j++)
        {
            if (s1[j] != s2[j])
            {
                *ptr_a = 0;
            }
        }
    }
    return *ptr_a;
}
