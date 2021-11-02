#include <stdio.h>
int main ()
{
	int failure=0;
	int passed=0;
	int student=1;
	int result;
	
	while (student<=10) {
		printf ("Enter result ( 1=pass,2=fail ) :\n");
		scanf ("%d",&result);
		if (result==1) {
			passed += 1;
		}
		else if (result==2)	{
			failure += 1;
		}
			student += 1;
	}
	
	printf ("Passed %d\n", passed);
	printf ("Failure %d\n", failure);
	
	if (passed>8) {
		printf ("Bonus to instructor!!\n");
	}
	return 0;
}
