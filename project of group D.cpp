//PAS080BCE064,065,067,068
// hame ley program banau da user hai na bus handaling company lai consider garey ra banau na khojdaii xan
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

// Define a structure for passenger details
typedef struct {
	char name[50];
	int bus_num;
	int num_of_seats;
} pd;

// Function prototypes
void reservation(void);
void viewdetails(void);
void printticket(char name[], int, int, float);
void specificbus(int);
float charge(int, int);
float recheck(int *re);
void login();

int main()
{
	// Display the header // output ramro dakhau na
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|       ----------------------------------      |\n");
	printf("\t\t|             BUS TICKET RESERVATION            |\n");
	printf("\t\t|                    SYSTEM                     |\n");
	printf("\t\t|       ----------------------------------      |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");

	// Call the login function to authenticate user , login garna
	login();
	// Variable to store user's choice
	int menu_choice, choice_return;
	// Display the main menu and handle user choices
	start:
	printf("\n=================================\n");
	printf("     BUS RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Bus");
	printf("\n------------------------");
	printf("\n3>> Exit");
	printf("\n-->");
	scanf("%d", &menu_choice);
	switch (menu_choice) //user aanu sar ko kam garna ko lagi
	{
	case 1:
		reservation(); //function call garey ko as per pequired
		break;
	case 2:
		viewdetails();
		break;
	case 3:
		return(0);
	default: // yadi case vanda baira ko enter haney ma mistake vayo vanna
		printf("\nInvalid choice"); 
	}
	goto start;
	return(0);
}

// Function to display available bus details
void viewdetails(void) //sabbai for an example ko lai
{
	printf("---------------------------------------------------------------------------------------");
	printf("\nBus.No\tName\t\t\tDestinations  \t\tCharges  \t\tTime\n");
	printf("---------------------------------------------------------------------------------------");
	printf("\n1001\tmukesh Travels        \tpokhara to Kavre        \tRs.500    \t\t9:00  AM");
	printf("\n1002\tmission Travels        \tpokhara To Dharan       \tRs.500  \t\t12:00 PM");
	printf("\n1003\thero Travels           \tdharan To Pokhara       \tRs.450   \t\t1:50  PM");
	printf("\n1004\tnabin Deluxe           \tPokhara To dhangadhi    \tRs.450   \t\t11:00 AM");
	printf("\n1005\tpawan Travels          \tkavre To pokhara        \tRs.400  \t\t7:05  AM");
	printf("\n1006\tbhugai Travels         \tdhangadhi To pokhara    \tRs.400   \t\t9:30  AM");
	printf("\n1007\tnepal  Travels        \tJumla To pokhara        \tRs.350   \t\t1:00  PM");
	printf("\n1008\tkundan Travels        \tpokhara To Jumla        \tRs.350   \t\t4:00  PM");
	printf("\n1009\tKathmandu Express     \tKathmandu To Pokhara    \tRs.600  \t\t5:35  PM");
	printf("\n1010\tSajha Yatayat        \tPokhara To Kathmandu    \tRs.600   \t\t4:15  PM");
}

// Function for ticket reservation
void reservation(void)
{
	char confirm;
	int i = 0;
	float charges;
	pd passdetails;
	FILE* fp; //file is needed kina ke to store data of the processed output of the cp
	fp = fopen("seats_reserved.txt", "a");
	printf("\nEnter Your Name:> ");
	fflush(stdin);
	gets(passdetails.name);
	printf("\nEnter Number of seats:> ");
	scanf("%d", &passdetails.num_of_seats);
	viewdetails();
	printf("\n\nEnter bus number:> ");
	start1:
	scanf("%d", &passdetails.bus_num);// structure ma data store hudaii xa hai
	if (passdetails.bus_num >= 1001 && passdetails.bus_num <= 1010)
	{
		charges = charge(passdetails.bus_num, passdetails.num_of_seats);
		printticket(passdetails.name, passdetails.num_of_seats, passdetails.bus_num, charges);
	}
	else
	{
		printf("\nInvalid bus Number! Enter again--> "); 
		goto start1;
	}

	printf("\n\nConfirm Ticket (y/n):>");
	start:
	scanf(" %c", &confirm);
	if (confirm == 'y') // file ma data print gardaii xam
	{
		fprintf(fp, "%s\t\t%d\t\t%d\t\t%.2f\n", &passdetails.name, passdetails.num_of_seats, passdetails.bus_num, charges);
		printf("==================");
		printf("\n Reservation Done\n");
		printf("==================");
	}
	else
	{
		if (confirm == 'n') {
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
	fclose(fp);
}

// Function to calculate charges based on bus number and number of seats
float charge(int bus_num, int num_of_seats)
{
	if (bus_num == 1001) //each by each user ley kun buss choose garo herdaii xam
	{
		return(500 * num_of_seats);
	}
	if (bus_num == 1002)
	{
		return(500 * num_of_seats);
	}
	if (bus_num == 1003)
	{
		return(450 * num_of_seats);
	}
	if (bus_num == 1004)
	{
		return(450 * num_of_seats);
	}
	if (bus_num == 1005)
	{
		return(400 * num_of_seats);
	}
	if (bus_num == 1006)
	{
		return(400 * num_of_seats);
	}
	if (bus_num == 1007)
	{
		return(350 * num_of_seats);
	}
	if (bus_num == 1008)
	{
		return(350 * num_of_seats);
	}
	if (bus_num == 1009)
	{
		return(600 * num_of_seats);
	}
	if (bus_num == 1010)
	{
		return(600 * num_of_seats);
	}
}

// Function to print ticket details
void printticket(char name[], int num_of_seats, int bus_num, float charges)
{ //conforme garna user lai
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s", name);
	printf("\nNumber Of Seats:\t%d", num_of_seats);
	printf("\nbus Number:\t\t%d", bus_num);
	specificbus(bus_num);
	printf("\nCharges:\t\t%.2f", charges);
}
// Function to display specific bus details
void specificbus(int bus_num)
{
	if (bus_num == 1001)
	{
		printf("\nbus:\t\t\tmukesh Travels ");
		printf("\nDestination:\t\tpokhara to Kavre");
		printf("\nDeparture:\t\t9:00am ");
	}
	if (bus_num == 1002)
	{
		printf("\nbus:\t\t\tmission Travels ");
		printf("\nDestination:\t\tpokhara to Dharan");
		printf("\nDeparture:\t\t12:00pm");
	}
	if (bus_num == 1003)
	{
		printf("\nbus:\t\t\tHero Travels ");
		printf("\nDestination:\t\tdharan to Pokhara");
		printf("\nDeparture:\t\t1:50am");
	}
	if (bus_num == 1004)
	{
		printf("\nbus:\t\t\tnsbin Deluxe ");
		printf("\nDestination:\t\tPokhara to dhangadhi");
		printf("\nDeparture:\t\t11:00am ");
	}
	if (bus_num == 1005)
	{
		printf("\nbus:\t\t\tpawan Travels ");
		printf("\nDestination:\t\tkavre to pokhara");
		printf("\nDeparture:\t\t7:05am");
	}
	if (bus_num == 1006)
	{
		printf("\nbus:\t\t\tbhugai Travels ");
		printf("\nDestination:\t\tdhangadhi to pokhara ");
		printf("\nDeparture:\t\t9.30am ");
	}
	if (bus_num == 1007)
	{
		printf("\nbus:\t\t\tnepal Travels");
		printf("\nDestination:\t\tjumla  to pokhara ");
		printf("\nDeparture:\t\t1:00pm ");
	}
	if (bus_num == 1008)
	{
		printf("\nbus:\t\t\tkundan Travels ");
		printf("\n Destination:\t\tpokhara to jumla");
		printf("\nDeparture:\t\t4:00pm ");
	}
	if (bus_num == 1009)
	{
		printf("\nbus:\t\t\tKathmandu Express");
		printf("\nDestination:\t\tKathmandu to Pokhara");
		printf("\nDeparture:\t\t5.35pm ");
	}
	if (bus_num == 1010)
	{
		printf("\nbus:\t\t\tSajha Yatayat");
		printf("\nDestination:\t\tPokhara to Kathmandu");
		printf("\nDeparture:\t\t4.15 ");
	}
}

// Function for user login
void login() // username admin aani password pass pailai declear dardey ko ho
{
	int a = 0, i = 0;
	char uname[10], c = ' ';
	char pword[10], code[10];
	char user[10];
	char pass[10];
	do
	{
		printf("\n  =======================  LOGIN FORM  =======================\n  ");
		printf(" \n                       ENTER USERNAME:-");
		scanf("%s", &uname);
		printf(" \n                       ENTER PASSWORD:-");
		while (i < 10)
		{
			pword[i] = getch();
			c = pword[i];
			if (c == 13) break;
			else printf("*");
			i++;
		}
		pword[i] = '\0';
		i = 0;
		if (strcmp(uname, "mission") == 0 && strcmp(pword, "blueeyes") == 0)
		{
			printf("  \n\n\n       WELCOME TO OUR  BUS RESERVATION SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
			break;
		}
		else
		{
			printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
			a++;
		}
	} while (a <= 2);
	if (a > 2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
	}
}


