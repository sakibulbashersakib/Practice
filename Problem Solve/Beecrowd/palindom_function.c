#include <stdio.h>
#include <string.h>
void is_palindrome(char str[])
{
    int flag=0,len;
    len = strlen(str);
    for(int i=0;i < len ;i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("Not Palindrome");
    }    
    else
    {
        printf("Palindrome");
    }
}
int main()
{
    char str[100];
    scanf("%s",str);
    is_palindrome(str);
    return 0;
}