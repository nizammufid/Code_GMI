
#include <stdio.h>


/* Pre processor directive*/
/* Handles all input & output functions*/
/*#include <stdlib.h>*/
/*#include <windows.h> */

int main()                                   /* Main Function*/

{

int choice;    /*choice represents number 1, 2 , 3*/
int pilih;
char ch;    /* pilih represents character 1, 2, 3*/
int minute;
float hour, feet, meter;
int celcius, fahrenheit;

do{
      choice:

      printf("Welcome to this unit converter\n");
      printf("\t\t===================================\n");
      printf("\t\tI     CHOOSE UNIT TO CHANGE       I\n");/* The outer menu*/
      printf("\t\tI=================================I\n");
      printf("\t1. Time : minute -> hour\n");
      printf("\t2. Distance : feet -> meter\n");
      printf("\t3. Temperature \n");
      printf("\t4. End\n");/* Refer to Figure. 1 MainMenu */
      printf("\tChoice: ");
      scanf("%d", &choice);

switch(choice)
     {

       case 1:
           m_to_h:

                  printf("Input time in minute: ");
                  scanf("%d", &minute);
                  hour = (float)minute/60;
                  printf("%d Minute = %.2f Hour\n", minute, hour);

      printf("Do you want to repeat ? (y/n)\n");
      printf("\tChoice:");
      scanf(" %c", &ch);    /* space between " and %c */

     if (ch == 'y' || ch == 'Y')
//break;


{                                    /* || this is logical OR */
  system("cls");   /* goto add if the user press y and press enter */


  goto m_to_h;
}


else
                       system("cls");
   continue;


       system ("cls");


       case 2:
             system("cls");


                     f_to_m:


                printf("Input distance in feet: ");


                    scanf("%f", &feet);


                   meter = feet * 0.3048;


                  printf("%.2f Feet = %.4f Meter\n", feet, meter);


                  printf("Do you want to repeat ? (y/n)\n");


  printf("\tChoice:");


  scanf(" %c", &ch);


      if (ch == 'y' || ch == 'Y')
                 // break;


{                        /* || this is logical OR */
  system("cls");  /* goto add if the user press y and press enter */


  goto f_to_m;
}


    else
                         system("cls");


    continue;


       system ("cls");


       case 3:
           system("cls");


                do{


temp:


        printf("\n\t\tCHOOSE UNIT TO CHANGE\n");
                                                             /*The inner/nested menu*/
      printf("\t\t=====================\n");
      printf("\t1. Celcius -> Fahrenheit\n");
                    printf("\t2. Fahrenheit -> Celcius\n");
          printf("\t3. Return to Main\n");


/* Refer to Figure. 2. Tempreature submenu */


           printf("\tChoice: ");


           scanf("%d", &pilih);


           system ("cls");




                  switch(pilih)


                  {   /* The nested switch*/


        system("cls");


                              case 1:


                                    c_to_f:




                printf("Input temperature in celcius: ");
                  scanf("%d", &celcius);
                      fahrenheit = (celcius) * 9/5 + 32;
                  printf("%d Celcius = %d fahrenheit\n",celcius, fahrenheit);


printf("Do you want to repeat ? (y/n)\n");
                printf("\tChoice:");
                scanf(" %c", &ch);


                if (ch == 'y' || ch == 'Y')
                  //break;


                       {                              /* || this is logical OR */
  system("cls");   /* goto add if the user press y and press enter */


  goto c_to_f;
   }
else
system("cls");


                          continue;
system("cls");


  case 2:


  f_to_c:


                printf("Input temperature in fahrenheit: ");
                  scanf("%d", &fahrenheit);


                      celcius = ((fahrenheit)- 32) * 5/9;


                  printf("%d fahrenheit = %d celcius\n",fahrenheit,celcius);


printf("Do you want to repeat ? (y/n)\n");
                printf("\tChoice:");
                scanf(" %c", &ch);


if (ch == 'y' || ch == 'Y')
                  //break;
{
system("cls");


goto f_to_c;
}
                 else
system("cls");


continue;


                        system("cls");


                              case 3:


  printf("Return to Main \n");


  break;


                              default:
                              printf("Invalid selection\n");


break;
          }
                               break;






}  while(pilih != 3);
  break;
       case 4:    printf("Thank you for using this program\n\n");
        break;


       default:   printf("\tPlease choose from options 1 to 4 only\n");


         Sleep(3000);    /* Time Delay  */


         system("cls");


          //goto choice;




       }


   }while (choice != 4);


return 0;
}
