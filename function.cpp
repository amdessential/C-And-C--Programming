#include <stdio.h>
#include <math.h>
void menu1 ()
{
	printf ("Imaginary");
}

void menu2 (double x1, x2, a, b, d)
{
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf ("x1 = %lf\t x2 = %lf",x1,x2);
}

int main (double a, b, c, d)
{
	printf ("Input coefficient of a :");
	scanf ("%lf",&a);
	printf ("Input coefficient of b :");
	scanf ("%lf",&b);
	printf ("Input coefficient of c :");
	scanf ("%lf",&c);
	d=b*b - (4*a*c);
	if (d>0)
		menu1();
	else 
		menu2();
}
