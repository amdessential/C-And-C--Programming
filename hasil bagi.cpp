#include<stdio.h>

int main() {
	int n1,n2,n3,n4,p1,p2,p3,p4,counter=0;
	float a,b,c,d;
	printf("Masukkan diskon : ");
	scanf("%d",&n1);
	printf("Masukkan harga setelah diskon : ");
	scanf("%d",&p1);
	a=(n1/100)*p1;
	printf("Masukkan diskon : ");
	scanf("%d",&n2);
	printf("Masukkan harga setelah diskon : ");
	scanf("%d",&p2);
	b=(n2/100)*p2;
	printf("Masukkan diskon : ");
	scanf("%d",&n3);
	printf("Masukkan harga setelah diskon : ");
	scanf("%d",&p3);
	c=(n3/100)*p3;
	printf("Masukkan diskon : ");
	scanf("%d",&n4);
	printf("Masukkan harga setelah diskon : ");
	scanf("%d",&p4);
	d=(n4/100)*p4;
	printf ("%.2f \n %.2f \n %.2f \n %.2f",a,b,c,d);
	return 0;
}
