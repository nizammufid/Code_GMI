/*array.c*/
/* calculate the average of an array of numbers*/
#include <stdio.h>
const int MAX = 5; /*size of array*/
int main( )
{
int age[ ] = {19,17,18,20,22}; /*initialization of an
 array*/
for(int i =0; i <MAX; i++)
printf("\nElement [%d] = %d\n",i,age[i]); /*output all the array elements of age[ ]
                                         with its array index*/
 float marks[MAX]; /*define array of 5 elements*/
 float sum = 0.0;
 for(int j=0; j <MAX; j++)
 {
printf("\nEnter Mark %d: ", j+1);
 scanf("%f", &marks);
 sum += marks[j]; /*sum the marks*/
 }
 float average = sum/MAX;
 printf("\nThe average of the marks is = %.2f",
 average);
 return 0;
 }
