#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void menu()
{
	printf("Terima Kasih :)");
}

int main () 
{
	char user [8] = "dila";
	char nama [8], pas[8];
	int ulang = 0;
	int i;
	printf ("\nSilahkan login.\n");
	printf ("\nUsername [8] :");
	scanf ("%s", &nama);
	printf ("\nPassword [8] :");
	scanf ("%s", &pas);
	
	if (strcmp(user,nama)==0&&strcmp(user,pas)==0) {
		printf ("Selamat, Anda Berhasil Login");
		getch();
		system("cls");
		menu();
	}
	else if (strcmp(user,nama)!=0||strcmp(user,pas)!=0) {
		printf ("Maaf, usename dan password anda salah");
		getch();
		system("cls");
		main();
	}
}
