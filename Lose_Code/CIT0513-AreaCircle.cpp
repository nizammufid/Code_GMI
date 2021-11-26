#include<stdio.h>
#define PI 3.141

main()
{
    float radius,Area;

    printf("Enter the Value of the Radius of a Circle\n");
    scanf("%f",&radius);

    Area=PI * radius * radius;

    printf("result of pi %.2f ",Area);
}
