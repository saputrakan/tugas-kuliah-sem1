#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, akhir;
    printf("Masukkan berapa angka yang akan ditampilkan : ");
    scanf("%d", &akhir);
    for ( i = 1; i <= akhir; i++)
        if ( i % 2 == 0)
            printf("-%d ", i) ;
        else
            printf(" %d ", i );
    return 0;
}
