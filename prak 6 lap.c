#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;

   printf("Masukkan angka : ");
   scanf("%d", &num);

   if(num==1)
    printf ("Minggu");
   else if (num==2)
    printf ("Senin");
   else if (num==3)
    printf ("Selasa");
   else if (num==4)
    printf ("Rabu");
   else if (num==5)
    printf ("Kamis");
   else if (num ==6)
    printf("Jum'at");
   else if (num ==7)
    printf ("Sabtu");
   else
    printf ("Hari tidak valid");
    return 0;
}
