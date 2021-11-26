#include <stdio.h>

int add(); /* prototype/declaration*/
int result; /* global variable - can be accessed by all function in the C program*/

int main( )
{

    char ch;

     while(1)
     {

    printf("\t\t===================================\n");
    printf("\t\tI     Additional Calculator       I\n"); /* The outer menu*/
    printf("\t\tI=================================I\n");
    add( );             /* call add */

    printf("\n\nThe sum of 2 numbers is %d \n",result);

    printf("Do you wish to add more numbers(y/n)\n");


    scanf(" %c",&ch);    /* space between " and %c */


      if ( ch == 'y' || ch == 'Y' )


          continue;


                       else


                               break;
   }

return 0;


}


int add( ) /* function definition*/
{
int num1, num2;         /* Local variables /* variables may only be used by the function add */

printf("Enter number 1 : ");

scanf("%d", &num1);

printf("Enter number 2 : ");

scanf("%d", &num2);

result = num1 + num2; /*formula*/

return result;
}
