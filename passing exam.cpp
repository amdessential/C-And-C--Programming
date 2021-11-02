#include <stdio.h>
#include <conio.h>
int main ()

{
	int a,b,c;
	do{
	printf ("Hello.. Welcome to my program!!\n Input your grades at last two exams!\n");
	scanf ("%d%d",&a,&b);
	c = (a+b)/2;
	if (c >= 70){
		printf ("Congratulations! You pass the indicator of the weeks!\n\n");
	}
	if (c <= 70){
		printf ("Sorry. You must redo the exam! Fighting!\n\n");
	}
}while (c > 0);
	getch ();
	return 0;
}
