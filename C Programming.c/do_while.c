#include <stdio.h>
int main(){
int i=55;
int n;
printf("Enter the value of n\n");
scanf("%d",&n);

do{
printf("The number is %d \n",i);
i++;
}while(i<n);
return 0;
}