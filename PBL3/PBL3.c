#include <stdio.h>

int main()
{
	//Variable declaration
	int option, Amenu, bmenu, b1menu, b2menu, cmenu;
	char ch;
	do {
		option:

		printf("Welcome to Main Menu\n");
		printf("\t\t===================================\n");
		printf("\t\tI     Choose one action           I\n");
		printf("\t\tI=================================I\n");
		printf("\t1. Wave\n");
		printf("\t2. Electric\n");
		printf("\t3. Radioactivity \n");
		printf("\t4. End\n");
		printf("\tChoice: ");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				system("cls");
				Amenu:
				printf("Wave Menu\n");
				printf("\t\t===================================\n");
				printf("\t\tI     Choose one action           I\n");
				printf("\t\tI=================================I\n");
				printf("\t1. Velocity\n");
				printf("\t2. Frequency\n");
				printf("\t3. Wave Length \n");
				printf("\t4. Return Main Menu\n");
				printf("\tChoice: ");
				scanf("%d", &Amenu);

				//A sub menu start
				switch (Amenu)
				{
					case 1:
						system("cls");
						velocity:

						velocity();
						printf("Do you want to repeat ? (y/n)\n");
						printf("\tChoice:");
						scanf(" %c", &ch);

						if (ch == 'y' || ch == 'Y')
						{
							system("cls");
							goto velocity;
						}
						else{
							system("cls");
							goto Amenu;
							system("cls");
						}
					break;

					case 2:
						system("cls");
						frequency:
						frequency();
						printf("Do you want to repeat ? (y/n)\n");
						printf("\tChoice:");
						scanf(" %c", &ch);

						if (ch == 'y' || ch == 'Y')
						{
							system("cls");
							goto frequency;
						}
						else{
							system("cls");
							goto Amenu;
							system("cls");
						}
					break;

					case 3:
						system("cls");
						wave_length:
						wave_length();
						printf("Do you want to repeat ? (y/n)\n");
						printf("\tChoice:");
						scanf(" %c", &ch);

						if (ch == 'y' || ch == 'Y')
						{
							system("cls");
							goto wave_length;
						}
						else{
							system("cls");
							goto Amenu;
							system("cls");
						}
					break;

					case 4:	//exit
						printf("Return to Main \n");
						system("cls");
					break;
					default:
						printf("Invalid selection\n");
					break;
				}
			break;

				// A submenu stop
				//b submenu start
			case 2:
				system("cls");
				electric:
					bmenu:

				printf("Electric Menu\n");
				printf("\t\t===================================\n");
				printf("\t\tI     Choose one action           I\n");
				printf("\t\tI=================================I\n");
				printf("\t1. Current\n");
				printf("\t2. Potential Different\n");
				printf("\t3. Return\n");
				printf("\tChoice: ");
				scanf("%d", &bmenu);

				switch (bmenu)
				{
					//b1menu start
					case 1:
						system("cls");
						b1menu:

						printf("Current Sub-Menu\n");
						printf("\t\t===================================\n");
						printf("\t\tI     Choose one action           I\n");
						printf("\t\tI=================================I\n");
						printf("\t1. Charge\n");
						printf("\t2. Current\n");
						printf("\t3. Time\n");
						printf("\t4. Return\n");
						printf("\tChoice: ");
						scanf("%d", &b1menu);

						switch (b1menu)
						{
							case 1:
								system("cls");
								charge:

								charge();
								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch);

								if (ch == 'y' || ch == 'Y')
								{
									system("cls");
									goto charge;
								}
								else{
									system("cls");
									goto b1menu;
									system("cls");
								}
							break;

							case 2:
								system("cls");
								current:
								current();
								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch);

								if (ch == 'y' || ch == 'Y')
								{
									system("cls");
									goto current;
								}
								else{
									system("cls");
									goto b1menu;
									system("cls");
								}
							break;

							case 3:
								system("cls");
								time:
								time();
								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch);

								if (ch == 'y' || ch == 'Y')
								{
									system("cls");
									goto time;
								}
								else{
									system("cls");
									goto b1menu;
									system("cls");
								}
							break;

							case 4:	//exit
								printf("Return to Main \n");
								system("cls");
								goto bmenu;
							default:
								printf("Invalid selection\n");
								break;
						}
					break;
						//b1menu stop
						//b2menu start
					case 2:
						system("cls");
						b2menu:
						printf("Potential Different Sub-Menu\n");
						printf("\t\t===================================\n");
						printf("\t\tI     Choose one action           I\n");
						printf("\t\tI=================================I\n");
						printf("\t1. Potential Different\n");
						printf("\t2. Energy\n");
						printf("\t3. Change\n");
						printf("\t4. Return\n");
						printf("\tChoice: ");
						scanf("%d", &b2menu);

						switch (b2menu)
						{
							case 1:
								system("cls");
								Potential_differences:

								potential_differences();
								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch);

								if (ch == 'y' || ch == 'Y')
								{
									system("cls");
									goto Potential_differences;
								}
								else{
									system("cls");
									goto b2menu;
									system("cls");
								}
							break;

							case 2:
								system("cls");
								Energy:
								energy();
								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch);

								if (ch == 'y' || ch == 'Y')
								{
									system("cls");
									goto Energy;
								}
								else{
									system("cls");
									goto b2menu;
									system("cls");
								}
							break;
							case 3:
								system("cls");
								change:
								change();
								printf("Do you want to repeat ? (y/n)\n");
								printf("\tChoice:");
								scanf(" %c", &ch);

								if (ch == 'y' || ch == 'Y')
								{
									system("cls");
									goto change;
								}
								else{
									system("cls");
									goto b2menu;
									system("cls");
								}
							break;
							case 4:	//exit
								printf("Return to Main \n");
								system("cls");
								goto bmenu;
							break;
							default:
								printf("Invalid selection\n");
							break;
						}
					break;
						//b1menu stop
						//exit
					case 3:
						printf("Return to Main \n");
						system("cls");
					break;

					default:
						printf("Invalid selection\n");
					break;
				}
			break;

				//b submenu stop
				//c submenu start
			case 3:
				system("cls");
				cmenu:
				printf("Radioactivity Menu\n");
				printf("\t\t===================================\n");
				printf("\t\tI     Choose one action           I\n");
				printf("\t\tI=================================I\n");
				printf("\t1. Mass Change\n");
				printf("\t2. Energy Change\n");
				printf("\t3. Return Main Menu\n");
				printf("\tChoice: ");
				scanf("%d", &cmenu);
				switch (cmenu)
				{
					case 1:
						system("cls");
						mass_energy:

						mass_change();
						printf("Do you want to repeat ? (y/n)\n");
						printf("\tChoice:");
						scanf(" %c", &ch);

						if (ch == 'y' || ch == 'Y')
						{
							system("cls");
							goto mass_energy;
						}
						else{
							system("cls");
							goto cmenu;
							system("cls");
						}
					break;

					case 2:
						system("cls");
						Energy_change:
						energy_change();
						printf("Do you want to repeat ? (y/n)\n");
						printf("\tChoice:");
						scanf(" %c", &ch);

						if (ch == 'y' || ch == 'Y')
						{
							system("cls");
							goto Energy_change;
						}
						else{
							system("cls");
							goto cmenu;
							system("cls");
						}
					break;
					case 3:	//exit
						printf("Return to Main \n");
						system("cls");
						break;
					default:
						printf("Invalid selection\n");
						break;

				}
			break;
				//c submenu stop
		}
	} while (option != 4);

	return 0;
}

// A menu start
void velocity(){
float freq,lambda,velocity;
printf("===================================\n");
printf("I        Velocity Formula         I\n");
printf("I           V = f x λ            I\n");
printf("I=================================I\n");
printf("Input Frequency:");
scanf("%f", &freq);
printf("Input λ(Lambda):");
scanf("%f", &lambda);
velocity=freq*lambda;
printf("Velocity = %.2f\n", velocity);

}

void frequency(){
float freq,lambda,velocity;
printf("===================================\n");
printf("I        frequency Formula         I\n");
printf("I           F = V / λ            I\n");
printf("I=================================I\n");
printf("Input Velocity:");
scanf("%f", &velocity);
printf("Input λ(Lambda):");
scanf("%f", &lambda);
freq=velocity/lambda;
printf("Frequenct = %.2f\n", freq);

}

void wave_length(){
float freq,lambda,velocity;
printf("===================================\n");
printf("I        Wave Length Formula      I\n");
printf("I           V = f x λ            I\n");
printf("I=================================I\n");
printf("Input Frequency:");
scanf("%f", &freq);
printf("Input Velocity:");
scanf("%f", &velocity);
lambda=velocity/freq;
printf("λ(lambda) = %.2f\n", lambda);

}

// A menu Stop
// B menu start
// b1 menu start
void charge(){
float current,charge,time;
printf("===================================\n");
printf("I        Charge  Formula  	      I\n");
printf("I           Q = I x t             I\n");
printf("I=================================I\n");
printf("Input Current:");
scanf("%f",&current);
printf("Input Time:");
scanf("%f", &time);
charge = current * time;
printf("Charge = %.2f\n",charge);

}

void current(){
float current,charge,time;
printf("===================================\n");
printf("I        Current  Formula  	      I\n");
printf("I           I = Q x t             I\n");
printf("I=================================I\n");
printf("Input Charge:");
scanf("%f",&charge);
printf("Input Time:");
scanf("%f", &time);
current = charge * time;
printf("Current = %.2f\n",current);

}

void time(){
float current,charge,time;
printf("===================================\n");
printf("I         Time Formula  	      I\n");
printf("I           T = I x Q             I\n");
printf("I=================================I\n");
printf("Input Current:");
scanf("%f",&current);
printf("Input Charge:");
scanf("%f", &charge);
time = current * charge;
printf("Time = %.2f\n",time);

}

//b1 menu stop
//b2 menu start
void potential_differences(){
float voltage,energy,change;
printf("===================================\n");
printf("I   Potential Difference Formula  I\n");
printf("I           V = E / Q             I\n");
printf("I=================================I\n");
printf("Input Energy/Watt:");
scanf("%f",&energy);
printf("Input Change:");
scanf("%f",&change);
voltage=energy/change;
printf("Voltage = %.2f\n",voltage);

}

void energy(){
float voltage,energy,change;
printf("===================================\n");
printf("I   	Energy Formula			  I\n");
printf("I           E = V x Q             I\n");
printf("I=================================I\n");
printf("Input Voltage:");
scanf("%f",&voltage);
printf("Input Change:");
scanf("%f",&change);
energy=voltage*change;
printf("Energy = %.2f\n",energy);

}

void change(){
float voltage,energy,change;
printf("===================================\n");
printf("I   	  Change Formula		  I\n");
printf("I           Q = V x E             I\n");
printf("I=================================I\n");
printf("Input Voltage:");
scanf("%f",&voltage);
printf("Input Energy:");
scanf("%f",&energy);
change=voltage*energy;
printf("Change = %.2f\n",change);

}
//b2 menu stop
//b menu stop
//c menu start

void mass_change(){
float mass,energy;
int constant = 299792458;
printf("===================================\n");
printf("I   	Mass Change Formula		  I\n");
printf("I           E= mc^2               I\n");
printf("I=================================I\n");
printf("Input Energy Change:");
scanf("%f",&energy);
energy=mass * (constant*constant);
printf("Mass Change = %.2f\n",mass);
}

void energy_change(){
float mass,energy;
int constant = 299792458;
printf("===================================\n");
printf("I   	Energy Change Formula	  I\n");
printf("I           E= mc^2               I\n");
printf("I=================================I\n");
printf("Input Mass Change:");
scanf("%f",&mass);
energy=mass * (constant*constant);
printf("Energy Change = %.2f\n",energy);

}

//c menu stop
// end code