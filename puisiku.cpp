#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main ()
{
	int a;
	char password [50];
	{
		printf ("\nHello,\nCan you, Enter a password : ");
		scanf ("%s",&password);
		if (strcmp (password,"marmut")==0)
		{
			do {
			printf ("\nPassword success!\n\nEnter the number :");
			scanf ("%d",&a);
			if (a==1) {
		printf ("Ketahuilah satu hal yang tak pernah kau duga\n");
		printf ("Bahwa ada satu rahasia tersimpan di lubuk hati\n");
		printf ("Hati yang lama telah terkekang di dalam alur\n");
		printf ("Kau tahu apa itu?\n");
		printf ("I LOVE YOU\n");
		getch();
		system ("cls");
	}
	else if (a==2) {
		printf ("Cinta itu buta\n");
		printf ("Kau tahu kenapa?\n");
		printf ("Karena pesona mu sudah membutakan mataku\n");
		getch ();
		system ("cls");
	}
	else if (a==3) {
		printf ("Emosi takkan mampu membuat masalah selesai\n");
		printf ("Debat takkan mampu membuat konflik selesai\n");
		printf ("Solusi kecil yang kadang terlihat sepele untuk kita\n");
		printf ("Yaitu saling mengerti dan mengalah\n");
		getch ();
		system ("cls");
	}
	else if (a==4) {
		printf ("Percayalah satu hal yang takkan hilang dariku\n");
		printf ("Percayalah satu hal yang takkan dilupakan olehku\n");
		printf ("Percayalah satu hal yang takkan lenyap karnaku\n");
		printf ("Yaitu 'kenangan'\n");
		getch ();
		system ("cls");
	}
	else if (a==5) {
		printf ("Jangan berpura pura baik baik saja dihadapanku\n");
		printf ("Karna aku perlu tahu kesedihanmu untuk mengerti kamu\n");
		printf ("Jangan berpura pura jadi orang baik dihadapanku\n");
		printf ("Karena apa adanya dirimu yang kubutuhkan\n");
		printf ("Bukannya pencitraan\n");
		getch ();
		system ("cls");
	}
	} while (a!=0);
		}
	return 0;
	}
}
