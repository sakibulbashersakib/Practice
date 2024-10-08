#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1001];
    scanf("%s",s);
    int count[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int value=s[i]-97;
        count[value]++;
    }
    for(int i=0;i<26;i++)
    {
        printf("%c - %d\n",i+97,count[i]);
    }
    return 0;
}
