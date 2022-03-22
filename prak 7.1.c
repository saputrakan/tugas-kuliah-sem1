#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka;
    printf("Masukkan angka : ");
    scanf("%d", &angka);

   switch(angka){
   case 1 :
       printf("Minggu") ;
        break ;
    case 2 :
       printf("Senin") ;
        break ;
    case 3 :
        printf("Selasa");
        break;
    case 4 :
        printf("Rabu");
        break;
    case 5 :
        printf("Kamis");
        break;
    case 6 :
        printf("Jum'at");
        break;
    case 7 :
        printf("Sabtu");
        break;
    default :
        printf("Hari tidak valid");

   }

    return 0;
}
