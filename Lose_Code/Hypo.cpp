
/*Demonstrating function with arguments*/
/*Calculate the hypotenuse of right-angled triangle*/


#include <stdio.h>
#include <math.h>


float hypotenuse(float, float); /*f.declaration with 2 arguments*/


int main( )
{
float base, side, hypot;
printf("\nPlease enter the base and side of\n");
printf(" the right-angled triangle to calculate\n");
printf(" the hypotenuse\n");
printf("Base : "); scanf("%f",&base);
printf("Side : "); scanf("%f",&side);
hypot = hypotenuse(base, side);
printf("\nThe hypotenuse of a triangle with base = %.2f\n",base);
printf(" and side = %.2f is = %.2f\n",side,hypot);
return 0;
}




float hypotenuse(float bas, float sid)               /*f.definition with 2 arguments*/
{
float hypo = sqrt(bas*bas + sid*sid);
return hypo;
}
