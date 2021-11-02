#include <stdio.h>
#include <string.h>

int main()
{
	int hitung;
	char kata[100];

	printf("\t\t PROGRAM PEMBALIK KATA \n\n");

	printf("Masukkan kata yang ingin dibalik : \n");
	scanf("%[^\n]s", &kata);
	hitung=strlen(kata);
	printf("kata setelah dibalik : \n");
	for(hitung-1;hitung>0;hitung--)
	{
    	printf("%c", kata[hitung-1]);
	}
	printf("\n");
	return 0;
}
