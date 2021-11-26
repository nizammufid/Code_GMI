/*Demonstrating function with no argument*/
/*Calculate the hypotenuse of right-angled triangle*/


#include <stdio.h>
#include <math.h>


float hypotenuse( ); /*f.declaration with no argument*/


int main( )


{


     hypotenuse( ); /*f.call*/


return 0;
}


float hypotenuse( ) /*f.definition with no argument*/


{


float base, side, hypot;


printf("\nPlease enter the base and side of\n");


printf(" the right-angled triangle to calculate\n");


printf(" the hypotenuse\n");


printf("Base : "); scanf("%f",&base);


printf("Side : "); scanf("%f",&side);


hypot = sqrt(base*base + side*side);


printf("\nThe hypotenuse of a triangle with base = %.2f\n",base);
printf(" and side = %.2f is = %.2f\n",side,hypot);


return 0;
}
