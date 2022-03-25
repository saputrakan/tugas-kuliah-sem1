#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inp ;
    int totKar = 0, totSpa = 0, besar = 0, kecil = 0, angka = 0 ;
    printf("Masukkan Kalimat : ") ;
    while(inp !='\n'){
    scanf("%c", &inp) ;
         if (inp != ' ')
            totKar++ ;
        else
            totSpa++ ;
        if (inp >= 'A' && inp <= 'Z')
            besar++ ;
        if (inp >= 'a' && inp <= 'z')
            kecil++ ;
        if (inp >= '0' && inp <= '9')
            angka++ ;
    }
       printf("Total Karakter : %d\n", totKar - 1) ;
       printf("Total Spasi : %d\n", totSpa) ;
       printf("Total Huruf Kapital : %d\n", besar) ;
       printf("Total Huruf Kecil : %d\n", kecil) ;
       printf("Total Angka : %d\n", angka) ;
    return 0;
}
