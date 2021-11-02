#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int vr, vbr, w;
	float vbg, d;
	printf ("\t\t\t Physics Calculators\n");
	printf ("\t\t  O-O-O-O-O-O-O-O-O-O-O-O-O-O-O-O\n\n");
	printf ("Calculation of the boat speed towards the ground\n");
	printf ("**************************************************\n\n");
	printf ("\tvbg = sqrt<vr^2 + vbr^2)\n\n");
	printf ("Where : vr = River flow velovity\n");
	printf ("\tvbr = Boat speed againts the river\n");
	printf ("\tvbg = Boat speed towards the ground\n\n");
	printf ("Input vr <in meters per second> :");
	scanf ("%d" ,&vr);
	
	float a,b;
	printf ("Input vbr <in meters per second> :");
	scanf ("%d" ,&vbr);
	a=pow(vr,2);
	b=pow(vbr,2);
	vbg = sqrt((a+b));
	printf ("Boat speed towards the ground : %.2f\n\n", vbg);
	printf ("Calculated Distance of the boat traveled across a river :\n");
	printf ("**************************************************\n\n");
	printf ("\td = w * vbr / vbg\n\n");
	printf ("Where : d = distance of a boat traveled across a river\n");
	printf ("\tw = river width\n\n");
	printf ("Input w <in meters> :");
	scanf  ("%d",&w);
	d = w*vbr/vbg;
	printf ("distance of a boat traveled across a river : %f \n", d ); 
	
	return 0; 
}	
