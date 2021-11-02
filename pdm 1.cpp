#include <stdio.h>
int main ()
{
	int angka [3] [3];
	angka [0][0] = 10;
	angka [0][1] = 20;
	angka [0][2] = 30;
	angka [1][0] = 30;
	angka [1][1] = 22;
	angka [1][2] = 12;
	angka [2][0] = 33;
	angka [2][1] = 17;
	angka [2][2] = 25;
	printf ("angka :\n");
	printf ("%d %d %d", angka [0][0], angka [0][1], angka [0][2]);
	printf ("\n%d %d %d", angka [1][0], angka [1][1], angka [1][2]);
	printf ("\n%d %d %d", angka [2][0], angka [2][1], angka [2][2]);
	return 0;
}
