/* Preprocessor directives */
/* Handles all input & output functions*/
#include <stdio.h>



/*global Variable declaration*/
	int option, Amenu, bmenu, b1menu, b2menu, cmenu;  /*Choice represents number 1, 2 , 3*/
	char ch; /* ch represents character 1, 2, 3*/



int main()  /* Main Function*/
{




	do {  //dowhile statement



		option: 	/*Goto Function*/
		printf("Physics SPM Calculator\n");
		printf("Welcome to Main Menu\n");
		printf("\t\t===================================\n");
		printf("\t\tI     Choose one action           I\n");  /* Refer to Figure. 1 MainMenu */
		printf("\t\tI=================================I\n");
		printf("\t1. Wave\n");
		printf("\t2. Electric\n");
		printf("\t3. Radioactivity \n");
		printf("\t4. End\n");




		/*User Input*/
		printf("\tChoice: ");
		scanf("%d", &option); /*User Input Scan*/





		switch (option) /*switch-case Statement*/
		{


			/*SubMenu-A Start*/
			case 1:
				system("cls"); /*Clear Screen*/



				Amenu:
				printf("Wave Menu\n");
				printf("\t\t===================================\n");
				printf("\t\tI     Choose one action           I\n");  /* Refer to Figure. 2 SubMenu-A */
				printf("\t\tI=================================I\n");
				printf("\t1. Velocity\n");
				printf("\t2. Frequency\n");
				printf("\t3. Wave Length \n");
				printf("\t4. Return Main Menu\n");




				printf("\tChoice: ");
				scanf("%d", &Amenu); /*User Input Scan*/





				/*SubMenu-A Switch Start*/
				switch (Amenu) /*switch-case Statement*/
				{




					case 1:
						system("cls"); /*Clear Screen*/



						velocity: /*Goto Function*/
						velocity(); /*CallBack Velocity Function*/


						/*User Input*/
						printf("Do you want to repeat ? (y/n)\n");
						printf("\tChoice:");
						scanf(" %c", &ch); /*User Input Scan*/



						if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
						{
							system("cls"); /*Clear Screen*/
							goto velocity; /*Goto Function*/
						}



						else{
							system("cls"); /*Clear Screen*/
							goto Amenu; /*Goto Function*/
							system("cls"); /*Clear Screen*/
						}



					break; /*Switch-Case Break Case 1 */





					case 2:
						system("cls"); /*Clear Screen*/



						frequency: /*Goto Function*/
						frequency(); /*CallBack Frequency Function*/



						/*User Input*/
						printf("Do you want to repeat ? (y/n)\n");
						printf("\tChoice:");
						scanf(" %c", &ch); /*User Input Scan*/

						if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
						{
							system("cls"); /*Clear Screen*/
							goto frequency; /*Goto Function*/
						}



						else{
							system("cls");	/*Clear Screen*/
							goto Amenu; 	/*Goto Function*/
							system("cls"); 	/*Clear Screen*/
						}



					break;	/*Switch-Case Break Case 2 */





					case 3:
						system("cls"); /*Clear Screen*/



						wave_length:/*Goto Function*/
						wave_length(); /* CallBack Wave_length Function*/



						/*User Input*/
						printf("Do you want to repeat ? (y/n)\n");
						printf("\tChoice:");
						scanf(" %c", &ch);  /*User Input Scan*/

						if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
						{
							system("cls"); /*Clear Screen*/
							goto wave_length; /*Goto Function*/
						}




						else{
							system("cls");	/*Clear Screen*/
							goto Amenu; 	/*Goto Function*/
							system("cls");	/*Clear Screen*/
						}




					break; 	/*Switch-Case Break Case 3 */

					case 4:/*Exit*/
						printf("Return to Main \n");
						system("cls");  /*Clear Screen*/



					break; /*Switch-Case Break Case 3 */




					default: /*Defailt Switch-Case Return*/
						printf("Invalid selection\n"); /*Printf Function*/



					break;/*Switch-Case Break Default */
				}
				/*SubMenu-A Switch Stop*/



			break; /*Switch-Case Break SubMenu-A Case 1*/
			/*SubMenu-A Stop*/




			/*SubMenu-B Start*/

			case 2:
				system("cls"); /*Clear Screen*/



				electric: /*Goto Function*/
				bmenu: /*Goto Function*/

				printf("Electric Menu\n");
				printf("\t\t===================================\n");
				printf("\t\tI     Choose one action           I\n");  /* Refer to Figure. 3 SubMenu-B */
				printf("\t\tI=================================I\n");
				printf("\t1. Current\n");
				printf("\t2. Potential Different\n");
				printf("\t3. Return\n");




				printf("\tChoice: ");
				scanf("%d", &bmenu); /*User Input Scan*/



				/*SubMenu-B Switch Start*/
				switch (bmenu) /*switch-case Statement*/
				{




					/*SubMenu-B1 Start*/
					case 1:
						system("cls"); /*Clear Screen*/



						b1menu: /*Goto Function*/



						printf("Current Sub-Menu\n");
						printf("\t\t===================================\n");
						printf("\t\tI     Choose one action           I\n");
						printf("\t\tI=================================I\n");
						printf("\t1. Charge\n");  		/*Refer to Figure 4 SubMenu-B1*/
						printf("\t2. Current\n");
						printf("\t3. Time\n");
						printf("\t4. Return\n");




						printf("\tChoice: ");
						scanf("%d", &b1menu); /*User Input Scan*/



						/*SubMenu-B1 Switch Start*/
						switch (b1menu) /*switch-case Statement*/
						{



							case 1:
								system("cls"); /*Clear Screen*/



								charge: /*Goto Function*/
								charge(); /*CallBack Charge Function*/



								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch);  /*User Input Scan*/




								if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
								{
									system("cls");	/*Clear Screen*/
									goto charge; 	/*Goto Function*/
								}




								else{
									system("cls");	/*Clear Screen*/
									goto b1menu; 	/*Goto Function*/
									system("cls");	/*Clear Screen*/
								}



							break; /*Switch-Case Break Case 1*/





							case 2:
								system("cls"); /*Clear Screen*/



								current:	/*Goto Function*/
								current();	/*CallBack Current Function*/




								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch); /*User Input Scan*/




								if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
								{
									system("cls"); /*Clear Screen*/
									goto current; /*Goto Function*/
								}



								else{
									system("cls");	/*Clear Screen*/
									goto b1menu;	/*Goto Function*/
									system("cls");	/*Clear Screen*/
								}



							break; /*Switch-Case Break Case 2*/




							case 3:
								system("cls"); /*Clear Screen*/




								time: /*Goto Function*/
								time(); /*CallBack Time Function*/




								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch); /*User Input Scan*/




								if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
								{
									system("cls");	/*Clear Screen*/
									goto time; 		/*Goto Function*/
								}




								else{
									system("cls");	/*Clear Screen*/
									goto b1menu; 	/*Goto Function*/
									system("cls");	/*Clear Screen*/
								}




							break;/*Switch-Case Break Case 3*/




							case 4:	/*Return To SubMenu-B*/



								printf("Return to Main \n");
								system("cls"); /*Clear Screen*/
								goto bmenu; /*Goto Function*/



							break; /*Switch-Case Break Case 4*/



							default:/*Default Switch-Case Return*/
								printf("Invalid selection\n");



								break; /*Switch-Case Break Default*/
						}
						/*SubMenu-B1 Switch Stop*/




					break;  /*SubMenu-B1 Stop*/






					/*SubMenu-B2 Start*/
					case 2:



						system("cls");	/*Clear Screen*/
						b2menu: 		/*Goto Function*/



						printf("Potential Different Sub-Menu\n");
						printf("\t\t===================================\n");
						printf("\t\tI     Choose one action           I\n");
						printf("\t\tI=================================I\n");
						printf("\t1. Potential Different\n");   /*Refer to Figure 5 SubMenu-B2*/
						printf("\t2. Energy\n");
						printf("\t3. Change\n");
						printf("\t4. Return\n");




						printf("\tChoice: ");
						scanf("%d", &b2menu); /*User Input Scan*/

						/*SubMenu-B2 Switch Start*/
						switch (b2menu) /*switch-case Statement*/
						{




							case 1:
								system("cls"); /*Clear Screen*/




								Potential_differences: /*Goto Function*/
								potential_differences();  /*CallBack Potential_Different Function*/



								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch); /*User Input Scan*/




								if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
								{
									system("cls"); /*Clear Screen*/
									goto Potential_differences; /*Goto Function*/
								}




								else{
									system("cls");	/*Clear Screen*/
									goto b2menu; 	/*Goto Function*/
									system("cls");	/*Clear Screen*/
								}



							break; /*Switch-Case Break Case 1*/




							case 2:
								system("cls"); /*Clear Screen*/



								Energy: 	/*Goto Function*/
								energy(); /*CallBack Energy Function*/




								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch); /*User Input Scan*/




								if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
								{
									system("cls");	/*Clear Screen*/
									goto Energy;  	/*Goto Function*/
								}




								else{
									system("cls");	/*Clear Screen*/
									goto b2menu; 	/*Goto Function*/
									system("cls");	/*Clear Screen*/
								}



							break; /*Switch-Case Break Case 2*/




							case 3:
								system("cls"); /*Clear Screen*/



								change:		/*Goto Function*/
								change(); 	/*CallBack Change Function*/




								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch); /*User Input Scan*/




								if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
								{
									system("cls");	/*Clear Screen*/
									goto change; 	/*Goto Function*/
								}



								else{
									system("cls");	/*Clear Screen*/
									goto b2menu; 	/*Goto Function*/
									system("cls");	/*Clear Screen*/
								}



							break; /*Switch-Case Break Case 3*/



							case 4:


								printf("Return to Main \n");
								system("cls"); 	/*Clear Screen*/
								goto bmenu; 	/*Goto Function*/



							break; /*Switch-Case Break Case 4*/





							default: /*Default Switch-Case Return*/
								printf("Invalid selection\n");



							break;	/*Switch-Case Break Default*/
						}
						/*SubMenu-B2 Switch Stop*/


					break;
					/*SubMenu-B2 Stop*/




					case 3:
						printf("Return to Main \n");
						system("cls");	/*Clear Screen*/



					break;				/*Switch-Case Break Case 3*/




					default: /*Default Switch-Case Return*/
						printf("Invalid selection\n");



					break; /*Switch-Case Break Default*/
				}


			break;
			/*SubMenu-B Switch Stop*/



			/*SubMenu-C  Start*/
			case 3:
				system("cls");	/*Clear Screen*/



				cmenu: 			/*Goto Function*/
				printf("Radioactivity Menu\n");
				printf("\t\t===================================\n");
				printf("\t\tI     Choose one action           I\n");
				printf("\t\tI=================================I\n");
				printf("\t1. Power of Lens\n");   		 /*Refer to Figure 6 SubMenu-C*/
				printf("\t2. Linear Magnification\n");
				printf("\t3. Return Main Menu\n");




				printf("\tChoice: ");
				scanf("%d", &cmenu);  /*User Input Scan*/




				/*SubMenu-C Switch Start*/
				switch (cmenu) /*switch-case Statement*/
				{




					case 1:
						system("cls"); /*Clear Screen*/


						Power_of_Lens: /*Goto Function*/
						Power_of_Lens(); /*CallBack Power_of_Lens Function*/



						printf("Do you want to repeat ? (y/n)\n");
						printf("\tChoice:");
						scanf(" %c", &ch);   /*User Input Scan*/





						if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
						{
							system("cls"); /*Clear Screen*/
							goto Power_of_Lens;  /*Goto Function*/
						}




						else{
							system("cls");	/*Clear Screen*/
							goto cmenu; 	/*Goto Function*/
							system("cls");	/*Clear Screen*/
						}



					break; /*Switch-Case Break Case 1*/




					case 2:
						system("cls"); /*Clear Screen*/



						Linear_Magnification: 	/*Goto Function*/
						Linear_Magnification(); /*CallBack  Linear_Magnification Function*/




						printf("Do you want to repeat ? (y/n)\n");
						printf("\tChoice:");
						scanf(" %c", &ch); /*User Input Scan*/





						if (ch == 'y' || ch == 'Y') /*IfElse Statement*/
						{
							system("cls"); 				/*Clear Screen*/
							goto Linear_Magnification;	/*Goto Function*/
						}




						else{
							system("cls");	/*Clear Screen*/
							goto cmenu; 	/*Goto Function*/
							system("cls");	/*Clear Screen*/
						}



					break; /*Switch-Case Break Case 2*/




					case 3:
						printf("Return to Main \n");
						system("cls"); /*Clear Screen*/



						break;/*Switch-Case Break Case 3*/




					default:
						printf("Invalid selection\n"); // prompt




					break; /*Switch-Case Break Default*/

				}
			break;
			/*SubMenu-C Switch Stop*/


		}



	} while (option != 4); /*Dowhile Statement*/



	return 0;
	/*return 0 means that the program will execute successfully and did what it was intended to do*/

}

/*SubMenu-A Start*/


void velocity(){ 			/* SubFunction*/

float freq,lambda,velocity; /*Variable Declaration*/




printf("===================================\n");
printf("I        Velocity Formula         I\n");
printf("I           V = f x λ            I\n"); /*Refer to Figure 7 Velocity Function*/
printf("I=================================I\n");


printf("Input Frequency:");
scanf("%f", &freq);  /*User Input Scan Store as freq*/


printf("Input λ(Lambda):");
scanf("%f", &lambda);  /*User Input Scan Store as lambbda*/


velocity=freq*lambda; /*Calculation Proccess Formula */


printf("Velocity = %.2f m/s \n", velocity); /*Display Output*/

}
/*End of Function*/





void frequency(){ /* SubFunction*/

float freq,lambda,velocity; /*Variable Declaration*/



printf("===================================\n");
printf("I        frequency Formula         I\n");
printf("I           F = V / λ            I\n"); /*Refer to Figure 8 Frequency Function*/
printf("I=================================I\n");




printf("Input Velocity:");
scanf("%f", &velocity); /*User Input Scan Store as velocity*/




printf("Input λ(Lambda):");
scanf("%f", &lambda); /*User Input Scan Store as lambbda*/



freq=velocity/lambda; /*Calculation Proccess Formula */


printf("Frequenct = %.2f Hz \n", freq); /*Display Output*/

}
/*End Of Function*/

void wave_length(){ /* SubFunction*/

float freq,lambda,velocity; /*Variable Declaration*/




printf("===================================\n");
printf("I        Wave Length Formula      I\n");
printf("I           V = f x λ            I\n"); /*Refer to Figure 9 Wave Length Function*/
printf("I=================================I\n");



printf("Input Frequency:");
scanf("%f", &freq); /*User Input Scan Store as Freq*/



printf("Input Velocity:");
scanf("%f", &velocity); /*User Input Scan Store as velocity*/



lambda=velocity/freq; /*Calculation Proccess Formula */



printf("λ(lambda) = %.2f m \n", lambda); /*Display Output*/

}
/*End Of Function*/
/*SubMenu-B Stop*/



/*SubMenu-B Start*/
/*SubMenu-B1 Start*/

void charge(){ /* SubFunction*/

float current,charge,time; /*Variable Declaration*/



printf("===================================\n");
printf("I        Charge  Formula          I\n"); /*Refer to Figure 10 Charge Function*/
printf("I           Q = I x t             I\n");
printf("I=================================I\n");



printf("Input Current:");
scanf("%f",&current); /*User Input Scan Store as Current*/


printf("Input Time:");
scanf("%f", &time); /*User Input Scan Store as Time*/


charge = current * time; /*Calculation Proccess Formula */



printf("Charge = %.2f C \n",charge);  /*Display Output*/

}
/*End Of Function*/



void current(){ /* SubFunction*/

float current,charge,time; /*Variable Declaration*/



printf("===================================\n");
printf("I        Current  Formula         I\n");
printf("I           I = Q / t             I\n");/*Refer to Figure 11 Current Function*/
printf("I=================================I\n");



printf("Input Charge:");
scanf("%f",&charge); /*User Input Scan Store as charge*/



printf("Input Time:");
scanf("%f", &time); /*User Input Scan Store as Time*/



current = charge / time;  /*Calculation Proccess Formula */


printf("Current = %.2f A \n",current); /*Display Output*/

}
/*End Of Function*/


void time(){ /* SubFunction*/

float current,charge,time; /*Variable Declaration*/



printf("===================================\n");
printf("I         Time Formula            I\n");
printf("I           T = I / Q             I\n");/*Refer to Figure 12 Time Function*/
printf("I=================================I\n");



printf("Input Current:");
scanf("%f",&current); /*User Input Scan Store as Current*/



printf("Input Charge:");
scanf("%f", &charge); /*User Input Scan Store as Charge*/



time = current / charge; /*Calculation Proccess Formula */



printf("Time = %.2f s \n",time); /*Display Output*/

}
/*End Of Function*/
/*SubMenu-B1 Stop*/


/*SubMenu-B2 Start*/
void potential_differences(){ /* SubFunction*/

float voltage,energy,change; /*Variable Declaration*/



printf("===================================\n");
printf("I   Potential Difference Formula  I\n");
printf("I           V = E / Q             I\n"); /*Refer to Figure 13 Potenctial Different Function*/
printf("I=================================I\n");



printf("Input Energy/Watt:");
scanf("%f",&energy); /*User Input Scan Store as energy*/



printf("Input Change:");
scanf("%f",&change); /*User Input Scan Store as change*/



voltage=energy/change; /*Calculation Proccess Formula */



printf("Voltage = %.2f V \n",voltage); /*Display Output*/

}
/*End of Function*/


void energy(){ /* SubFunction*/

float voltage,energy,change; /*Variable Declaration*/
printf("===================================\n");
printf("I   	Energy Formula	          I\n");
printf("I           E = V x Q             I\n"); /*Refer to Figure 14 Energy Function*/
printf("I=================================I\n");




printf("Input Voltage:");
scanf("%f",&voltage); /*User Input Scan Store as Voltage*/



printf("Input Change:");
scanf("%f",&change); /*User Input Scan Store as Change*/



energy=voltage*change; /*Calculation Proccess Formula */



printf("Energy = %.2f J \n",energy); /*Display Output*/

}
/*End Of Function*/


void change(){ /* SubFunction*/

float voltage,energy,change; /*Variable Declaration*/
printf("===================================\n");
printf("I   	  Change Formula		  I\n");
printf("I           Q = V / E             I\n");/*Refer to Figure 15 Change Function*/
printf("I=================================I\n");




printf("Input Voltage:");
scanf("%f",&voltage);  /*User Input Scan Store as Voltage*/




printf("Input Energy:");
scanf("%f",&energy); /*User Input Scan Store as energy*/



change=voltage/energy; /*Calculation Proccess Formula */


printf("Change = %.2f C \n",change); /*Display Output*/

}
/*End Of Function*/
/*SubMenu-B2 Stop*/
/*SubMenu-B Stop*/



/*SubMenu-C Start*/

void Power_of_Lens(){ /* SubFunction*/

float power_of_lens,focal_length; /*Variable Declaration*/


printf("===================================\n");
printf("I   	Power Of Lens Formula	  I\n");
printf("I           1/Focal Length        I\n");/*Refer to Figure 16 Power Of Lens Function*/
printf("I=================================I\n");


printf("Focal length:");
scanf("%f",&focal_length); /*User Input Scan Store as Focal Length*/



power_of_lens=1/focal_length; /*Calculation Proccess Formula */


printf("Power of Lens =  %.2f  \n",power_of_lens); /*Display Output*/


}
/*End Of Function*/


void Linear_Magnification(){ /* SubFunction*/

float LM,ID,OD; 			/*Variable Declaration*/


printf("===================================\n");
printf("I  Linear Magnification Formula	  I\n");
printf("I           LM=ID/OD              I\n");/*Refer to Figure 17 Linear Magnification Function*/
printf("I=================================I\n");



printf("Object Distance: ");
scanf("%f",&OD);/*User Input Scan Store as OD*/




printf("Image Distance:");
scanf("%f",&ID); /*User Input Scan Store as ID*/

LM = ID/OD;  /*Calculation Proccess Formula */

printf("Linear Magnification =  %.2f cm \n",LM); /*Display Output*/

}
/*End Of Function*/
/*SubMenu-C Stop*/
/*End*/
