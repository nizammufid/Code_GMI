/*matintro.c*/ 
/*introduction to 2-dimensional arrays(matrices)*/ 
#include <stdio.h> 
const int ROWS = 2, COLS = 3; 
int main( ) 
{ 
int mat1[ROWS][COLS]; /*Defining a matrix of size 2 X 3*/
int mat2[ROWS][COLS] = {{1,2,3}, 
 {4,5,6}}; /*Initialization of a matrix*/
 for(int i=0; i <ROWS; ++i) 
 { 
 printf( "\n"); /*start a new line for each row*/
 for(int j=0; j<COLS;j++) 
 { 
mat1[i][j] = mat2[i][j]; /*Assigning values to 
mat1 matrix*/ 
 printf(" %d " , mat1[i][j]); 
 } 
 } 
 return 0; 
} 