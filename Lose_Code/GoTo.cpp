#include <stdio.h>


int checkEvenOrNot(int num);    /* Function Declaration */   /* Function has an argument (num).


/* function to check Even or Odd */


int checkEvenOrNot(int num)   /* Function Definition */


{


    if (num % 2 == 0 )   /* If num is divisible by 2 without a remainder, then num is even */




        /* jump to even */


        goto even;


    else


        /* jump to odd*/


        goto odd;


even:  /* Goto Label */


    printf("%d is even", num);


   // return if even


    return num;


odd:


    printf("%d is odd", num);
}




int main()
{
    int num = 7899733;


    checkEvenOrNot(num);


    return 0;


}
