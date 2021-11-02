#include <stdio.h>
int main ()
{
	float temp1,hasil;
	printf ("KALKULASI KONVERSI SUHU\n");
	printf ("CELCIUS ke REAMUR\n");
	do {
		printf ("Masukkan suhu yang ingin di konversikan :\n");
		scanf ("%f",&temp1);
		hasil = (4/5)*temp1;
		printf ("\nMaka hasil suhu dalam reamur adalah = %f\n");
	} while (hasil != 0);
	return 0;
}
