#include <stdio.h>

int main()
{
	int a;
	printf("Input bilangan untuk di inisialisasi : ");
	scanf("%d",&a);
	if (a%2==0) 
		printf("%d adalah bilangan genap",a);
	else 
		printf("%d adalah bilangan ganjil",a);
		
	return 0;
}
