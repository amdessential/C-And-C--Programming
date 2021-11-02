#include <stdio.h>
int main ()
{
	float temp1,hasil;
	printf ("KALKULATOR KONVERSI SUHU\n");
	printf ("REAMUR KE FARENHEIT\n");
	do {
	printf ("Masukkan temperatur untuk diubah menuju Farenheit :\n");
	scanf ("%f",&temp1);
	hasil = ((9*temp1)/4)+32;
	printf ("Hasil suhu dalam farenheit adalah %.2f", hasil);
	return 0;
	} while (hasil!=0);
}
