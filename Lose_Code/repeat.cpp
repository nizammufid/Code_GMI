#include<stdio.h>


int main()
{
int a, b, c;


    char ch;


    while(1)


   {
      printf("Enter values of a and b\n");


      scanf("%d %d",&a,&b);


      c = a + b;


      printf("a + b = %d\n", c);


      printf("Do you wish to add more numbers(y/n)\n");


  scanf(" %c",&ch);    /* space between " and %c */


      if ( ch == 'y' || ch == 'Y' )


          continue;


                       else


                               break;
   }


return 0;
}
