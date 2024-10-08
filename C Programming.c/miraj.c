#include<stdio.h>
main()
{
    float length, width, Area;
    printf("Enter length and width = ");
    scanf("%f%f",&length,&width);
    Area = length*width;
    printf("%f",Area);
    printf("Your Rectangle Area is = %f",Area);
}
