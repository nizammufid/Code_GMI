#include<stdio.h>


int main()


{
  int choice;    /*choice represents number 1, 2 , 3*/
  char pilih;    /* pilih represents character 1, 2, 3*/
  int minute;
  float hour, feet, meter;
  int celcius, fahrenheit;


do{
      printf("Welcome to this unit converter\n");
      printf("\t\t===================================\n");
      printf("\t\tI     CHOOSE UNIT TO CHANGE       I\n"); /* The outer menu*/
      printf("\t\tI=================================I\n");
      printf("\t1. Time : minute -> hour\n");
      printf("\t2. Distance : feet -> meter\n");
      printf("\t3. Temperature \n");
      printf("\t4. End\n");

      printf("\tChoice: ");
      scanf("%d", &choice);

switch(choice)
 {

       case 1:
        printf("Input time in minute: ");
                  scanf("%d", &minute);
                  hour = (float)minute/60;
                  printf("%d Minute = %.2f Hour\n", minute, hour);
                  break;

       case 2:
        printf("Input distance in feet: ");
                  scanf("%f", &feet);
                  meter = feet * 0.3048;
                  printf("%.2f Feet = %.4f Meter\n", feet, meter);
                  break;


       case 3:
                do{
        printf("\n\t\tCHOOSE UNIT TO CHANGE\n");/*The inner/nested menu*/
        printf("\t\t=====================\n");
        printf("\t1. Celcius -> Fahrenheit\n");
        printf("\t2. Fahrenheit -> Celcius\n");
        printf("\t3. End\n");

        printf("\tChoice: ");
        scanf("%s", &pilih);

    switch(pilih) {   /* The nested switch*/

        case '1':
                printf("Input temperature in celcius: ");
                scanf("%d", &celcius);
                fahrenheit = (celcius) * 9/5 + 32;
                printf("%d Celcius = %d fahrenheit\n",celcius, fahrenheit);
                break;

        case '2':
                printf("Input temperature in fahrenheit: ");
                scanf("%d", &fahrenheit);
                celcius = ((fahrenheit)- 32) * 5/9;
                printf("%d fahrenheit = %d celcius\n",fahrenheit,celcius);
                break;

        case '3':
                printf("End\n");
                break;


        default:
                printf("Invalid selection\n");

       }
        break; /* This break stops the sub menu from repeating*/


}

    while(pilih != 3);

        case 4:    printf("Thank you for using this program\n");
        break;

        default:   printf("Invalid selection\n");

}
}
while(choice != 4);
    return 0;
}
