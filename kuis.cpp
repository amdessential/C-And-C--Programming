#include <stdio.h>
#include <string.h>

int main ()
{
	int counta=0,counti=0,countu=0,counto=0,counte=0,countspace=0,x,a;
	char str[100];
	printf ("Masukkan inputan string :");
	scanf ("%[^\n]s",str);
	a=strlen(str);
	for (x=0;x<a;x++) {
		if (str[x]=='a'||str[x]=='A') counta++;
		else if (str[x]=='i'||str[x]=='I') counti++;
		else if (str[x]=='e'||str[x]=='E') counte++;
		else if (str[x]=='u'||str[x]=='U') countu++;
		else if (str[x]=='o'||str[x]=='O') counto++;
		else if (str[x]==' ') countspace++;
	}
	printf ("\n\nTotal huruf : %d",a-countspace);
	printf ("\nHuruf vokal A : %d",counta);
	printf ("\nHuruf vokal I : %d",counti);
	printf ("\nHuruf vokal U : %d",countu);
	printf ("\nHuruf vokal E : %d",counte);
	printf ("\nHuruf vokal O : %d",counto);
	return 0;
}
