#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char nama [8] = "kata";
	char username [8],password[8],back;

	do {
	printf ("\nLogin first...\n\n");
	printf ("* Username :");
	scanf ("%s",&username);
	printf ("* Password :");
	scanf ("%s",&password);
	} while ((strcmp(username,"kata")==1||strcmp(password,"kata")==1)); 
	
 	do {
	int choice,num,war,pin;
	printf ("\t\tSIMPLE JAVANESE PROGRAM\n");
	printf ("\t\t-----------------------\n");
	printf ("1. Number\n2. Colour\n3. Buy full version\n4. Exit\n\n");
	printf ("Enter your choice :");
	scanf ("%d",&choice);
	system ("cls");
	
	if (choice==1) {
		do {
		printf ("\tNumber\n");
		printf ("\t******\n\n");
		printf ("1. One\t\t4. Four\t\t7. Seven\n");
		printf ("2. Two\t\t5. Five\t\t8. Eight\n");
		printf ("3. Three\t6. Six\t\t9. Nine\n");
		printf ("\nEnter your choice :");
		scanf ("%d",&num);
		switch (num) {
			case (1) : printf ("\tOne is siji");
			break;
			case (2) : printf ("\tTwo is loro");
			break;
			case (3) : printf ("\tThree is telu");
			break;
			case (4) : printf ("\tFour is papat");
			break;
			case (5) : printf ("\tFive is limo");
			break;
			case (6) : printf ("\tSix is enem");
			break;
			case (7) : printf ("\tTujuh is pitu");
			break;
			case (8) : printf ("\tEight is wolu");
			break;
			case (9) : printf ("\tNine is songo");
			break;
		}
		printf ("\n\n<press R to menu : ");
		scanf ("%s",&back);
		}while (back=='R');
	}
	else if (choice==2) {
		printf ("\tColour\n");
		printf ("\t******\n\n");
		printf ("1. Black\t3. Green\t5. Orange\n");
		printf ("2. Blue\t\t4. Purple\t6. Red\n\n");
		do {
		printf ("\n\nEnter your choice :");
		scanf ("%d",&war);
		switch (war) {
			case (1) : printf ("Black is Ireng");
			break;
			case (2) : printf ("Blue is Biru");
			break;
			case (3) : printf ("Green is Ijo");
			break;
			case (4) : printf ("Purple is Ungu");
			break;
			case (5) : printf ("Orange is Oren");
			break;
			case (6) : printf ("Red is Abang");
			break;
		}
		printf ("\n\n<Press R to menu>");
		scanf ("%s",&back);
		} while (war!=0);
	}
	else if (choice==3) {
		printf ("Your e-money balance = $100\n\n");
		printf ("\t\tBuy full version\n");
		printf ("\t\t****************\n\n");
		printf ("Full version price = $89\n");
		printf ("Input your pin (6 digits) : ");
		scanf ("%d",&pin);
		printf ("\n\nCongrats!!\nYou bought successfully. your e-money balance now is = $11");
		printf ("\n\n<press R to continue>");
		scanf ("%s",&back);
		system("cls");
		} 
	else if (choice==4) {
		printf ("\n\nThank you for using this application :)");
		printf ("========================================\n\n");
	}
	}while (back='R');
	return 0;
}
