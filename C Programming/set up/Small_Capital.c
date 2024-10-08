#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1001];
    int capital=0,small=0,len;
    scanf("%s",s);
    len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            capital++;
        }
        else
        {
            small++;
        }
    }
    printf("%d %d",capital,small);
    return 0;
}
