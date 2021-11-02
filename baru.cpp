#include <stdio.h>
int main ()
{
	int number,a;
	{
		do {
		printf ("\nHello Marmut,\nCan you, Enter a password : ");
		scanf ("%d",&number);
		if (number == 200400)
		{
			do {
			printf ("\nPassword success!\nHello Marmut,Can help you? : ");
			scanf ("%d",&a);
			printf ("[Keyword 1-5 to get what do you want?]\n");
				if (a==1) {
		printf ("Ketahuilah satu hal yang tak pernah kau duga\n");
		printf ("Bahwa ada satu rahasia tersimpan di lubuk hati\n");
		printf ("Hati yang lama telah terkekang di dalam alur\n");
		printf ("Kau tahu apa itu?\n");
		printf ("I LOVE YOU\n");
	}
	else if (a==2) {
		printf ("Cinta itu buta\n");
		printf ("Kau tahu kenapa?\n");
		printf ("Karena pesona mu sudah membutakan mataku\n");
	}
	else if (a==3) {
		printf ("Emosi takkan mampu membuat masalah selesai\n");
		printf ("Debat takkan mampu membuat konflik selesai\n");
		printf ("Solusi kecil yang kadang terlihat sepele untuk kita\n");
		printf ("Yaitu saling mengerti dan mengalah\n");
	}
	else if (a==4) {
		printf ("Percayalah satu hal yang takkan hilang dariku\n");
		printf ("Percayalah satu hal yang takkan dilupakan olehku\n");
		printf ("Percayalah satu hal yang takkan lenyap karnaku\n");
		printf ("Yaitu 'kenangan'\n");
	}
	else if (a==5) {
		printf ("Jangan berpura pura baik baik saja dihadapanku\n");
		printf ("Karna aku perlu tahu kesedihanmu untuk mengerti kamu\n");
		printf ("Jangan berpura pura jadi orang baik dihadapanku\n");
		printf ("Karena apa adanya dirimu yang kubutuhkan\n");
		printf ("Bukannya pencitraan\n");
	}
	} while (a!=0);
		}
		else if (number != 200400) {
			printf ("%d, Sorry the Password is wrong.",number);
		}
		} while (number!=200400);
	}
	return 0;
}
