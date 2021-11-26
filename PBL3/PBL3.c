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

							printf("Velocity: ");
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
						printf("Frequency: ");
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
							printf("Wave_length: ");
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

									printf("Charge: ");
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
									printf("current: ");
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
									printf("time: ");
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

									printf("PD: ");
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
									printf("Energy: ");
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
									printf("change: ");
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

							printf("Mass Energy: ");
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
							printf("Energy Change: ");
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
