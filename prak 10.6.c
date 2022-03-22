#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, tot = 0, bil ;
    printf("Masukkan Angka : ");
    scanf("%d", &angka);
    bil = angka ;
    while (bil != 0){
        tot = tot + bil % 10 ;
        bil = bil / 10 ;
    }
        printf("Hasil penjumlahan : %d ", tot ) ;
    return 0;
}
