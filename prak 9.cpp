#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
void load_data();
void menu();
void pilih();
void print();
int cek_tanggal();
void random_platno();
void tambah();
void edit();
void menu4();
void save();

int i=0;

struct platno
{
	char nopol[10], nama[20], alamat[20], exp[10],no[7];
}PLATNO[100];


int main()
{	
	load_data();
	menu();
	pilih();	
	return 0;
}

void load_data()
{
	FILE *smst;
    smst=fopen("samsat.txt","r");
	while (fscanf(smst,"%s %s %s %s",&PLATNO[i].nopol,&PLATNO[i].nama,&PLATNO[i].alamat,&PLATNO[i].exp)!=EOF){
	   i++;
		}
	fclose(smst);
}

void random_platno(char *no){
	srand(time(NULL));
	no[0] = rand()%9+'0';
	no[1] = rand()%10+'0';
	no[2] = rand()%10+'0';
	no[3] = rand()%10+'0';
	no[4] = rand()%26+'A';
	no[5] = rand()%26+'A';
	no[6] = rand()%26+'A';
	return;
}

int cek_tanggal(char *tanggal){
	if(!(tanggal[0]) || !(tanggal[1]) || tanggal[2]!='/' || !(tanggal[3]) || !(tanggal[4]) || tanggal[5]!='/' || !(tanggal[6]) || !(tanggal[7])) return 0;
	
	if(tanggal[0]>'3') return 0;
	if(tanggal[0]=='3' && tanggal[1]>'1') return 0;
	if(tanggal[0]=='0' && tanggal[1]=='0') return 0;
	
	if(tanggal[3]>'1') return 0;
	if(tanggal[3]=='1' && tanggal[4]>'2') return 0;
	if(tanggal[3]=='0' && tanggal[4]=='0') return 0;
	
	return 1;
}

void print()
{
	printf("\n\nNo  : No Polisi     | Nama               |  Alamat             | Expired date");
	printf("\n=============================================================================================================");
	for(int j=0;j<i;j++)
	{
		printf ("\n%-2d  : %-13s | %-18s |  %-18s | %-5s",j+1, PLATNO[j].nopol, PLATNO[j].nama, PLATNO[j].alamat, PLATNO[j].exp);
	}
	printf("\npress ENTER to continue ");
	getch();
}

void tambah()
{
	char huruf[1];
	random_platno(*&PLATNO[i].no);
	printf ("\nMasukkan huruf pertama no polisi [A...Z] : ");
	scanf("%s",&PLATNO[i].nopol);
	printf("\nNo. polisi anda : %s%s", PLATNO[i].nopol,PLATNO[i].no);
	strcat(PLATNO[i].nopol, PLATNO[i].no);
	printf("\nMasukkan nama : ");
	scanf("%s",&PLATNO[i].nama);
	printf("\nMasukkan alamat :  ");
	scanf("%s",&PLATNO[i].alamat);
	do{
		printf("\nMasukkan expired date [DD/MM/YY] : ");
		scanf("%s",&PLATNO[i].exp);
		}while (strlen(PLATNO[i].exp)!=8 || cek_tanggal(*&PLATNO[i].exp ) == 0);
	printf("\n Data berhasil ditambahkan");
	i++;
	printf("\npress ENTER to continue ");
	getch();
}

void edit()
{
	int angka;
	print();
	printf("\nmasukkan No yang datanya ingin diedit : ");
	scanf("%d",&angka);
	printf("\ndata yang akan diedit:");
	printf("\n  Nopol     : %s",&PLATNO[angka-1].nopol);
	printf("\n  Nama      : %s",&PLATNO[angka-1].nama);
	printf("\n  Alamat    : %s",&PLATNO[angka-1].alamat);
	printf("\n  Exp date  : %s",&PLATNO[angka-1].exp);
	printf("\n\n Edit Data  : \n");
	printf("  Masukkan Nama          : ");
	scanf("%s",&PLATNO[angka-1].nama);
	printf("  Masukkan Alamat        : ");
	scanf("%s",&PLATNO[angka-1].alamat);
	printf("  Masukkan Exp date     : ");
	scanf("%s",&PLATNO[angka-1].exp);
	printf("\n Data berhasil diedit");
	printf("\n press ENTER to continue ");
	getch();
}

void menu4()
{
	int pilihsort;
	printf("\n1. sort by expired date");
	printf("\n2. sort by No polisi");
	printf("\npilihan : ");
	scanf("%d",&pilihsort);
}

void save()
{
	int j;
	FILE *smst;
	smst=fopen("samsat.txt","w");
	for(j=0;j<i;j++)
	{
		fprintf(smst,"%s %s %s %s \n", PLATNO[j].nopol, PLATNO[j].nama, PLATNO[j].alamat, PLATNO[j].exp);
	}
	printf("Data berhasil disimpan");
	fclose(smst);
}

void menu()
{
	printf("\nWELCOME TO SAMSAT ON LAN !\n\n");
	printf("1. Tampilkan semua data \n");
	printf("2. Tambah data \n");
	printf("3. Edit data \n");
	printf("4. Sort \n");
	printf("5. Save and exit \n");	
}

void pilih()
{
	int pilihan;
	printf("Masukkan pilihan anda [1...5] :  ");
	scanf("%d",&pilihan);
	switch (pilihan)
	{
		case 1:
			print();
			system("cls");
			menu();
			pilih();
			break;
		case 2:
			tambah();
			system("cls");
			menu();
			pilih();
			break;
		case 3:
			edit();
			system("cls");
			menu();
			pilih();
			break;
		case 4:
			menu4();
			break;
		case 5:
			save();
			break;
		default :
			pilih();
	}
}

