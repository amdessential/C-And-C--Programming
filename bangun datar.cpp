#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
	char nama [10],bangun [30];
	float p,l,t,d1,d2,b,r,a,luas,s;
	printf ("\t\tKALKULATOR LUAS BANGUN DATAR\n");
	printf ("\t\t0=0=0=0=0=0=0=0=0=0=0=0=0=0=0\n");
	printf ("\nMasukkan nama anda!\n");
	scanf ("%[^\n]s",&nama);
	fflush (stdin);
	printf ("\n\tHai, %s", nama);
	
	do {
	printf ("\nBangunan apakah yang ingin kau hitung luasnya?\n");
	printf ("\t-segitiga\n");
	printf ("\t-segiempat\n");
	printf ("\t-lingkaran\n");
	printf ("\t-jajargenjang\n");
	printf ("\t-layanglayang\n");
	printf ("\t-persegipanjang\n");
	printf ("\t-trapesium\n\n Answer =");
	scanf ("%s",bangun);
	if (strcmp(bangun,"persegipanjang")==0) {
		printf ("\n\nMasukkan nilai panjang =");
		scanf ("%f",&p);
		printf ("\nMasukkan nilai lebar =");
		scanf ("%f",&l);
		luas = p*l;
		printf ("\nMaka luas dari persegi panjang adalah = %.2f",luas);
		getch();
		system("cls");
	}
	else if (strcmp(bangun,"segitiga")==0) {
		printf ("\nMasukkan nilai alas =");
		scanf ("%f",&a);
		printf ("\nMasukkan nilai tinggi =");
		scanf ("%f",&t);
		luas = a*t*0.5;
		printf ("\nMaka luas dari segi tiga adalah = %.2f",luas);
		getch();
		system("cls");
	}
	else if (strcmp(bangun,"segiempat")==0) {
		printf ("\nMasukkan nilai kedua sisi =");
		scanf ("%f%f",&p,&l);
		luas = p*l;
		printf ("\nMaka luas dari segi empat adalah = %.2f",luas);
		getch();
		system("cls");
	}
	else if (strcmp(bangun,"lingkaran")==0) {
		printf ("\nMasukkan nilai jari - jari =");
		scanf ("%f",&r);
		luas = 3.14*(pow(r,2));
		printf ("\nMaka luas dari lingkaran adalah = %.2f",luas);
		getch();
		system("cls");
	}
	else if (strcmp(bangun,"layanglayang")==0) {
		printf ("\nMasukkan nilai d1 =");
		scanf ("%f",&d1);
		printf ("\nMasukkan nilai d2 =");
		scanf ("%f",&d2);
		luas = d1*d2*0.5;
		printf ("\nMaka luas dari layang layang adalah + %.2f",luas);
		getch();
		system("cls");
	}
	else if (strcmp(bangun,"segiempat")==0) {
		printf ("\nMasukkan sisi persegi =");
		scanf ("%f",&s);
		luas = s*s;
		printf ("\nMaka luas dari persegi adalah = %.2f",luas);
		getch();
		system("cls");
	}
	else if (strcmp(bangun,"jajargenjang")==0) {
		printf ("\nMasukkan alas jajar genjang =");
		scanf ("%f",&a);
		printf ("\nMasukkan tinggi jajar genjang =");
		scanf ("%f",&t);
		luas = a*t;
		printf ("\nMaka luas dari jajar genjang = %.2f",luas);
		getch();
		system("cls");
	}
	else if (strcmp(bangun,"trapesium")==0) {
		printf ("\nMasukkan nilai a =");
		scanf ("%f",&a);
		printf ("\nMasukkan nilai b =");
		scanf ("%f",&b);
		printf ("\nMasukkan niali tinggi =");
		scanf ("%f",&t);
		luas = (a+b)*t*0.5;
		printf ("\nMaka luas dari trapesium = %.2f",luas);
		getch();
		system("cls");
	}
	} while (luas!=0);
	
	return 0;
}
