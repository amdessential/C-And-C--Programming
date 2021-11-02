#include <stdio.h>
int main ()
{
	float temp1,hasil;
	printf ("KALKULASI KONVERSI SUHU\n");
	printf ("CELCIUS ke REAMUR\n");
	do {
		printf ("Masukkan suhu yang ingin di konversikan :\n");
		scanf ("%f",&temp1);
		hasil = (4*temp1)/5;
		printf ("\nMaka hasil suhu dalam reamur adalah = %.2f\n", hasil);
	} while (hasil != 0);
	return 0;
}
