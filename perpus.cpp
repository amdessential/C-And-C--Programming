#include <stdio.h>
#include <windows.h>

int index=0,iden=0;

struct bk {
	int stok;
	char kode[4],judul[40],pnl[40];
}BUKU[100];

struct pj {
	char kode[4],nama[40];
	int jum;
}PIN[100];

FILE *bk;
FILE *pj;

void samadengan (int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("=");
}

void spasi (int n)
{
	int i;
	for(i=0;i<n;i++)
	printf(" ");
}

void disbuk ()
{
	bk=fopen("Buku.txt","r");
	fflush(stdin);
	while(fscanf(bk,"%s %[^\n]s %[^\n]s %d",&BUKU[index].kode,&BUKU[index].judul,&BUKU[index].pnl,&BUKU[index].stok)!=EOF)
	index++;
	fclose(bk);
}

void dispin ()
{
	pj=fopen("Peminjam.txt","r");
	fflush(stdin);
	while(fscanf(pj,"%s %[^\n]s %d",&PIN[iden].kode,&PIN[iden].nama,&PIN[iden].jum)!=EOF)
	iden++;
	fclose(pj); 
}

void menu ()
{
	system("cls");
	int pil;
	samadengan(50);
	spasi(15);
	printf("WELCOME TO MY LIBRARY");
	samadengan(50);
	printf("1. Show the lists of book\n");
	printf("2. Borrow book\n");
	printf("3. Input books data\n");
	printf("4. Save\n");
	printf("5. Exit");
	do {
		printf("Masukkan pilihan anda [1-5] : ");
		scanf("%d",&pil);
	}
	while (pilih<1 || pilih>5);
	switch (pilih) {
		case 1 : {
			system("cls");
			menu1();
			break;
		}
		case 2 : {
			system("cls");
			menu2();
			break;
		}
		case 3 : {
			system("cls");
			menu3();
			break;
		}
		case 4 : {
			system("cls");
			menu4();
			break;
		}
		case 5 : {
			return 0;
			break;
		}
	}
}

int main ()
{
	disbuk();
	dispin();
	menu();
	return 0;
}
