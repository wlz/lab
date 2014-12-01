/*
 *  Write the function htoi(s), which converts a string of hexadecimal digits ( including an optional 0x or 0X ) into its equivalent integer value . The allowable digits are 0 through 9, a through f, and A through F .
 */

#include <stdio.h>

int htoi(char *s);
int power(int n);
int length(char *s);

int main()
{
    printf("%d\n", htoi("0xff1")); 
    printf("%d\n", htoi("0XD1A")); 
    
    return 0;
}

int length(char *s)
{
    if(!s[0])
        return 0;

    int len = 0;
    while(s[++len]);
    return len;
}

int htoi(char *s)
{
    int ans = 0;
    int len = length(s);
    if(len > 2)
    {
        if(s[0] = '0' && (s[1] == 'x' || s[1] == 'X'))
        {
            for(int i = 2; i < len; i++)
            { 
                int val = 0;
                if(s[i] >= '0' && s[i] <= '9')
                    val = s[i] - '0';
                else
                {
                    if(s[1] == 'x')
                    {
                        if(s[i] >= 'a' && s[i] <= 'f')
                            val = s[i] - 'a' + 10;
                    }
                    else if(s[1] == 'X')
                    {
                        if(s[i] >= 'A' && s[i] <= 'F')
                            val = s[i] - 'A' + 10;
                    }
                }
                ans += (val * power(len - i - 1));
            }
        }
    } 

    return ans;
}

int power(int n)
{
    int ans = 1;
    if(n >= 1)
    {
        while(n-- >= 1)
            ans *= 16;
    }

    return ans;
}
