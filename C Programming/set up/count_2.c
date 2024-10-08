#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     char s[8];
     int vawel=0,len;
     scanf("%s",s);
     len=strlen(s);
     for(int i=0;i<len;i++)
     {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            vawel++;
        }
     }
     printf("%d\n",vawel);
     printf("%d",len);
    return 0;
}
