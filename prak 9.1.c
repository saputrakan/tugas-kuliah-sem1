#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, jumlah ;
    printf("Masukkan Sampai Berapa Angka Yang Ditampilkan : ") ;
    scanf("%d", &jumlah) ;
    for( i = 1; i <= jumlah ; i = i + 2 )
            printf( "%d ", i ) ;
    return 0;
}
