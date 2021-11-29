#include <stdio.h>

int main()
{
	//global Variable declaration
	int option, Amenu, bmenu, b1menu, b2menu, cmenu;
	char ch;
	do {  //do while statement 
		option:

		printf("Welcome to Main Menu\n");  //Prompt
		printf("\t\t===================================\n"); //Prompt
		printf("\t\tI     Choose one action           I\n");  //Prompt
		printf("\t\tI=================================I\n");  //Prompt 
		printf("\t1. Wave\n");  //Prompt
		printf("\t2. Electric\n");  //Prompt
		printf("\t3. Radioactivity \n");  //Prompt
		printf("\t4. End\n");  //Prompt
		printf("\tChoice: ");  //Prompt
		scanf("%d", &option); //Input using scanf

		switch (option) // switch case function
		{
			case 1:
				system("cls"); // clear screen
				Amenu:
				printf("Wave Menu\n");  //Prompt
				printf("\t\t===================================\n"); 	//Prompt
				printf("\t\tI     Choose one action           I\n");  //Prompt 
				printf("\t\tI=================================I\n");  //Prompt
				printf("\t1. Velocity\n");  //Prompt
				printf("\t2. Frequency\n");  //Prompt
				printf("\t3. Wave Length \n");  //Prompt
				printf("\t4. Return Main Menu\n");  //Prompt
				printf("\tChoice: ");  //Prompt
				scanf("%d", &Amenu); //Input using scanf

				//A sub menu start
				switch (Amenu) //switch case function
				{
					case 1:
						system("cls"); // clear screen
						velocity:

						velocity(); // call function
						printf("Do you want to repeat ? (y/n)\n");  //Prompt
						printf("\tChoice:");  //Prompt
						scanf(" %c", &ch); //Input using scanf

						if (ch == 'y' || ch == 'Y') // if else statement
						{
							system("cls"); // clear screen
							goto velocity;
						}
						else{
							system("cls"); // clear screen
							goto Amenu;
							system("cls"); // clear screen
						}
					break;

					case 2:
						system("cls"); // clear screen
						frequency:
						frequency(); // call function
						printf("Do you want to repeat ? (y/n)\n");  //Prompt
						printf("\tChoice:");  //Prompt
						scanf(" %c", &ch); //Input using scanf

						if (ch == 'y' || ch == 'Y') // if else statement
						{
							system("cls"); // clear screen
							goto frequency; // goto function
						}
						else{
							system("cls"); // clear screen
							goto Amenu; // goto function
							system("cls"); // clear screen
						}
					break;

					case 3:
						system("cls"); // clear screen
						wave_length:
						wave_length(); // call function
						printf("Do you want to repeat ? (y/n)\n");  //Prompt
						printf("\tChoice:");  //Prompt
						scanf(" %c", &ch); //Input using scanf

						if (ch == 'y' || ch == 'Y') // if else function
						{
							system("cls"); // clear screen
							goto wave_length; // goto function
						}
						else{
							system("cls"); // clear screen
							goto Amenu; // goto function
							system("cls"); // clear screen
						}
					break;

					case 4:	//exit
						printf("Return to Main \n"); //prompt
						system("cls");  // clear screen
					break;
					default:
						printf("Invalid selection\n"); //prompt
					break;
				}
			break;

				// A submenu stop
				//b submenu start
			case 2:
				system("cls"); //clear screen
				electric:
					bmenu:

				printf("Electric Menu\n");
				printf("\t\t===================================\n");  //Prompt
				printf("\t\tI     Choose one action           I\n");  //Prompt
				printf("\t\tI=================================I\n");  //Prompt
				printf("\t1. Current\n");  //Prompt
				printf("\t2. Potential Different\n");  //Prompt
				printf("\t3. Return\n");  //Prompt
				printf("\tChoice: ");  //Prompt
				scanf("%d", &bmenu); //Input using scanf

				switch (bmenu) // switch case function
				{
					//b1menu start
					case 1:
						system("cls"); // clear screen
						b1menu:

						printf("Current Sub-Menu\n");  //Prompt
						printf("\t\t===================================\n");  //Prompt
						printf("\t\tI     Choose one action           I\n");  //Prompt
						printf("\t\tI=================================I\n");  //Prompt
						printf("\t1. Charge\n");  //Prompt
						printf("\t2. Current\n");  //Prompt
						printf("\t3. Time\n");  //Prompt
						printf("\t4. Return\n");  //Prompt
						printf("\tChoice: ");  //Prompt
						scanf("%d", &b1menu); //Input using scanf

						switch (b1menu) //switch case function
						{
							case 1:
								system("cls"); // clear screen
								charge:

								charge(); // call function
								printf("Do you want to repeat ? (y/n)\n");  //Prompt
								printf("\tChoice:");  //Prompt
								scanf(" %c", &ch); //Input using scanf

								if (ch == 'y' || ch == 'Y') //if else function
								{
									system("cls"); // clear screen
									goto charge; // goto function
								}
								else{
									system("cls"); // clear screen
									goto b1menu; // goto function
									system("cls"); // clear screen
								}
							break;

							case 2:
								system("cls"); //clear screen
								current:
								current(); // call function
								printf("Do you want to repeat ? (y/n)\n");  //Prompt
								printf("\tChoice:");  //Prompt
								scanf(" %c", &ch); //Input using scanf

								if (ch == 'y' || ch == 'Y') //ifelse function
								{
									system("cls"); // clear screen
									goto current; // goto function
								}
								else{
									system("cls"); // clear screen
									goto b1menu; // goto function
									system("cls"); // clear screen
								}
							break;

							case 3:
								system("cls"); // clear screen
								time:
								time(); // call function
								printf("Do you want to repeat ? (y/n)\n");  //Prompt
								printf("\tChoice:");  //Prompt
								scanf(" %c", &ch); //Input using scanf

								if (ch == 'y' || ch == 'Y') // if else function
								{
									system("cls"); // clear screen
									goto time; // goto function
								}
								else{
									system("cls"); // clear screen
									goto b1menu; // goto function
									system("cls"); // clear screen
								}
							break;

							case 4:	//exit
								printf("Return to Main \n"); //prompt
								system("cls"); // clear screen
								goto bmenu; // goto function
							default:
								printf("Invalid selection\n"); // prompt
								break;
						}
					break;
						//b1menu stop
						//b2menu start
					case 2:
						system("cls"); // clear screen
						b2menu:
						printf("Potential Different Sub-Menu\n");  //Prompt
						printf("\t\t===================================\n");  //Prompt
						printf("\t\tI     Choose one action           I\n");  //Prompt
						printf("\t\tI=================================I\n");  //Prompt
						printf("\t1. Potential Different\n");  //Prompt
						printf("\t2. Energy\n");  //Prompt
						printf("\t3. Change\n");  //Prompt
						printf("\t4. Return\n");  //Prompt
						printf("\tChoice: ");  //Prompt
						scanf("%d", &b2menu); //Input using scanf

						switch (b2menu) //switch case function
						{
							case 1:
								system("cls"); // clear screen
								Potential_differences:

								potential_differences();  // call function
								printf("Do you want to repeat ? (y/n)\n"); //propmt
								printf("\tChoice:"); //prompt
								scanf(" %c", &ch); //Input using scanf

								if (ch == 'y' || ch == 'Y') //ifelse function
								{
									system("cls"); // clear screen
									goto Potential_differences; // goto function
								}
								else{
									system("cls"); // clear screen
									goto b2menu; // goto function
									system("cls"); // clear screen
								}
							break;

							case 2:
								system("cls"); // clear screen
								Energy:
								energy(); // call function
								printf("Do you want to repeat ? (y/n)\n"); //prompt
								printf("\tChoice:"); //prompt
								scanf(" %c", &ch); //Input using scanf

								if (ch == 'y' || ch == 'Y') // if else function
								{
									system("cls"); // clear screen
									goto Energy;  // goto function
								}
								else{
									system("cls"); // clear screen
									goto b2menu; // goto function
									system("cls"); // clear screen
								}
							break;
							case 3:
								system("cls"); // clear screen
								change:
								change(); //call function
								printf("Do you want to repeat ? (y/n)\n"); //prompt
								printf("\tChoice:"); //prompt
								scanf(" %c", &ch); //Input using scanf

								if (ch == 'y' || ch == 'Y') //if else function
								{
									system("cls"); // clear screen
									goto change; // goto function
								}
								else{
									system("cls"); // clear screen
									goto b2menu; // goto function
									system("cls"); // clear screen
								}
							break;
							case 4:	//exit
								printf("Return to Main \n"); // prompt
								system("cls"); // clear screen
								goto bmenu; // goto function
							break;
							default:
								printf("Invalid selection\n"); // prompt
							break;
						}
					break;
						//b1menu stop
						//exit
					case 3:
						printf("Return to Main \n"); //prompt
						system("cls"); // clear screen
					break;

					default:
						printf("Invalid selection\n"); // prompt
					break;
				}
			break;

				//b submenu stop
				//c submenu start
			case 3:
				system("cls"); // clear screen
				cmenu:
				printf("Radioactivity Menu\n");  //Prompt
				printf("\t\t===================================\n");  //Prompt
				printf("\t\tI     Choose one action           I\n");  //Prompt
				printf("\t\tI=================================I\n");  //Prompt
				printf("\t1. Mass Change\n");  //Prompt
				printf("\t2. Energy Change\n");  //Prompt
				printf("\t3. Return Main Menu\n");  //Prompt
				printf("\tChoice: ");  //Prompt
				scanf("%d", &cmenu); //Input using scanf
				switch (cmenu) // switch case function
				{
					case 1:
						system("cls"); // clear screen
						mass_energy:

						mass_change(); // call function
						printf("Do you want to repeat ? (y/n)\n"); //Prompt
						printf("\tChoice:"); //Prompt
						scanf(" %c", &ch); //Input using scanf

						if (ch == 'y' || ch == 'Y') //if else function
						{
							system("cls"); // clear screen
							goto mass_energy; // goto function
						}
						else{
							system("cls"); // clear screen
							goto cmenu; // goto function
							system("cls"); // clear screen
						}
					break;

					case 2:
						system("cls"); // clear screen
						Energy_change:
						energy_change(); //call function
						printf("Do you want to repeat ? (y/n)\n"); //Prompt
						printf("\tChoice:"); //Prompt
						scanf(" %c", &ch); //Input using scanf

						if (ch == 'y' || ch == 'Y') //ifelse function
						{
							system("cls"); // clear screen
							goto Energy_change; // goto function
						}
						else{
							system("cls"); // clear screen
							goto cmenu; // goto function
							system("cls"); // clear screen
						}
					break;
					case 3:	//exit
						printf("Return to Main \n"); //prompt
						system("cls"); // clear screen
						break;
					default:
						printf("Invalid selection\n"); // prompt
						break;

				}
			break;
				//c submenu stop
		}
	} while (option != 4);

	return 0;
}

// A menu start
void velocity(){ //function
float freq,lambda,velocity; //Variable declaration
printf("===================================\n");
printf("I        Velocity Formula         I\n");
printf("I           V = f x λ            I\n");
printf("I=================================I\n");
printf("Input Frequency:"); //Prompt
scanf("%f", &freq); //Input using scanf
printf("Input λ(Lambda):"); //Prompt
scanf("%f", &lambda); //Input using scanf
velocity=freq*lambda; // Calculation formula
printf("Velocity = %.2f\n", velocity); //Display Output

}

void frequency(){ //function
float freq,lambda,velocity; //Variable declaration
printf("===================================\n");
printf("I        frequency Formula         I\n");
printf("I           F = V / λ            I\n");
printf("I=================================I\n");
printf("Input Velocity:"); //Prompt
scanf("%f", &velocity); //Input using scanf
printf("Input λ(Lambda):"); //Prompt
scanf("%f", &lambda); //Input using scanf
freq=velocity/lambda; // Calculation formula
printf("Frequenct = %.2f\n", freq); //Display Output

}

void wave_length(){ //function
float freq,lambda,velocity; //Variable declaration
printf("===================================\n");
printf("I        Wave Length Formula      I\n");
printf("I           V = f x λ            I\n");
printf("I=================================I\n");
printf("Input Frequency:"); //Prompt
scanf("%f", &freq); //Input using scanf
printf("Input Velocity:"); //Prompt
scanf("%f", &velocity); //Input using scanf
lambda=velocity/freq; // Calculation formula
printf("λ(lambda) = %.2f\n", lambda); //Display Output

}

// A menu Stop
// B menu start
// b1 menu start
void charge(){ //function
float current,charge,time; //Variable declaration
printf("===================================\n");
printf("I        Charge  Formula  	      I\n");
printf("I           Q = I x t             I\n");
printf("I=================================I\n");
printf("Input Current:"); //Prompt
scanf("%f",&current); //Input using scanf
printf("Input Time:"); //Prompt
scanf("%f", &time); //Input using scanf
charge = current * time; // Calculation formula
printf("Charge = %.2f\n",charge); //Display Output

}

void current(){ //function
float current,charge,time; //Variable declaration
printf("===================================\n");
printf("I        Current  Formula  	      I\n");
printf("I           I = Q x t             I\n");
printf("I=================================I\n");
printf("Input Charge:"); //Prompt
scanf("%f",&charge); //Input using scanf
printf("Input Time:"); //Prompt
scanf("%f", &time); //Input using scanf
current = charge * time;  // Calculation formula
printf("Current = %.2f\n",current); //Display Output

}

void time(){ //function
float current,charge,time; //Variable declaration
printf("===================================\n");
printf("I         Time Formula  	      I\n");
printf("I           T = I x Q             I\n");
printf("I=================================I\n");
printf("Input Current:"); //Prompt
scanf("%f",&current); //Input using scanf
printf("Input Charge:"); //Prompt
scanf("%f", &charge); //Input using scanf
time = current * charge; // Calculation formula
printf("Time = %.2f\n",time); //Display Output

}

//b1 menu stop
//b2 menu start
void potential_differences(){ //function
float voltage,energy,change; //Variable declaration
printf("===================================\n");
printf("I   Potential Difference Formula  I\n");
printf("I           V = E / Q             I\n");
printf("I=================================I\n");
printf("Input Energy/Watt:"); //Prompt
scanf("%f",&energy); //Input using scanf
printf("Input Change:"); //Prompt
scanf("%f",&change); //Input using scanf
voltage=energy/change; // Calculation formula
printf("Voltage = %.2f\n",voltage); //Display Output

}

void energy(){ //function
float voltage,energy,change; //Variable declaration
printf("===================================\n");
printf("I   	Energy Formula			  I\n");
printf("I           E = V x Q             I\n");
printf("I=================================I\n");
printf("Input Voltage:"); //Prompt
scanf("%f",&voltage); //Input using scanf
printf("Input Change:"); //Prompt
scanf("%f",&change); //Input using scanf
energy=voltage*change; // Calculation formula
printf("Energy = %.2f\n",energy); //Display Output

}

void change(){ //function
float voltage,energy,change; //Variable declaration
printf("===================================\n");
printf("I   	  Change Formula		  I\n");
printf("I           Q = V x E             I\n");
printf("I=================================I\n");
printf("Input Voltage:"); //Prompt
scanf("%f",&voltage); //Input using scanf
printf("Input Energy:"); //Prompt
scanf("%f",&energy); //Input using scanf
change=voltage*energy; // Calculation formula
printf("Change = %.2f\n",change); //Display Output

}
//b2 menu stop
//b menu stop
//c menu start

void mass_change(){ //function
float mass,energy; //Variable declaration
int constant = 299792458; // static variable declaration value 
printf("===================================\n");
printf("I   	Mass Change Formula		  I\n");
printf("I           E= mc^2               I\n");
printf("I=================================I\n");
printf("Input Energy Change:"); //Prompt
scanf("%f",&energy); //Input using scanf
mass=energy * (constant*constant); // Calculation formula
printf("Mass Change = %.2f\n",mass); //Display Output
}

void energy_change(){ //function
float mass,energy; //Variable declaration
int constant = 299792458; // static variable declaration value 
printf("===================================\n");
printf("I   	Energy Change Formula	  I\n");
printf("I           E= mc^2               I\n");
printf("I=================================I\n");
printf("Input Mass Change:"); //Prompt
scanf("%f",&mass); //Input using scanf
energy=mass * (constant*constant);  // Calculation formula
printf("Energy Change = %.2f\n",energy); //Display Output

}

//c menu stop
// end code
