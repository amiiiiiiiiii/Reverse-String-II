#include <string.h>
void reverse(char* s, int start, int end) 
{
    while (start < end) 
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

char* reverseStr(char* s, int k) 
{
    int len = strlen(s);
    for (int i = 0; i < len; i += 2 * k) 
    {
        int left = i;
        int right = i + k - 1;
        if (right >= len)
        {
            right = len - 1;
        }
          reverse(s, left, right);
    }
    return s;
}
