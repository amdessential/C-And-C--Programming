#include <stdio.h>
#include <math.h>

int main ()
{
	  float vr, vbr, vbg, d, w;
	  printf ("\t\t\t\t\tPhysics Calculator\n");
	  printf ("\t\t\t0-0-0-0-0-0-0-0-0-0-0-0-0-0-\n\n");
	  printf ("Calculate of the boat speed towards the ground\n");
	  printf ("=============================================\n\n");
	  
	  printf ("\t\tvbg = sqrt<vr^2 + vbr^2>\n\n");
	  
	  printf ("Where : vr  = River flow velocity\n");
	  printf ("\tvbr = Boat speed against the river\n");
	  printf ("\tvbg = Boat speed towards the ground\n");
	  
	  printf ("vr <in meters per second> :");
	  	scanf ("%f" ,&vr);
	  printf ("vbr <in meters per second> :");
	  	scanf ("%f" ,&vbr);
	  	  	vbg = sqrt(pow(vr,2)+pow(vbr,2));
	  
	  printf ("Boat speed towards the ground : %.2f\n", vbg);
	  printf ("\nCalculated Distance of a boat traveled across a river :\n");
	  printf ("*************************************************************\n");
	  printf ("\t\t d = w * vbr / vbg");
	  printf ("\nWhere : d = Distance of a boat traveled across a river\n");
	  printf ("\tw = River Width\n\n");
	  printf ("Input w <In meters> :");
	  	scanf  ("%f", &w);
	  		d = w*vbr/vbg;
	  printf ("Distance of a boat traveled across a river : %f", d);
	  
	  return 0;
}
