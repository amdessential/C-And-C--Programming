#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
      char string1 [] ="belajar pemrograman C++";

      printf ("Konversi String ke huruf Kapital");
      printf ("\n--------------------------------");
      
      printf ("\nstring1 : %s", string1);
      strupr(string1);
      printf ("\nstring1 setelah dikonversi : %s",string1);
      getch();
      return 0;
}
