#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int tg,ut,ua,labor;
	const float tugas=0.14, uts=0.21, uas=0.35, lab=0.3;
	float total;
	char lagi;
	do {
	printf ("PROSES NILAI \nMATA KULIAH ALGORITHM AND PROGRAMMING\n");
	printf ("\nMasukkan nilai tugas \t=");
	scanf ("%d",&tg);
	printf ("Masukkan nilai uts \t=");
	scanf ("%d",&ut);
	printf ("Masukkan nilai uas \t=");
	scanf ("%d",&ua);
	printf ("Masukkan nilai lab \t=");
	scanf ("%d",&labor);
	total=(tugas*tg)+(uts*ut)+(uas*ua)+(lab*labor);
	printf ("\nNilai akhir \t=%.2f",total);
	if (total>=90) printf ("\nGrade = A");
	else if (total >=85) printf ("\nGrade = A-");
	else if (total >=80) printf ("\nGrade = B+");
	else if (total >=75) printf ("\nGrade = B");
	else if (total >=65) printf ("\nGrade = C");
	else if (total >=50) printf ("\nGrade = D");
	else if (total <50) printf ("\nGrade = E");
	do {
	printf ("\n\nHitung lagi? [Y/T]");
	lagi=getchar();
	} while ((lagi!= 'Y') && (lagi!= 'y') && (lagi!= 'T') && (lagi != 't'));
	} while ((lagi== 'Y') || (lagi== 'y'));
	return 0;
	}
