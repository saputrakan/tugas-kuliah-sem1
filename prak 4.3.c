#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jm3, jmTiket, sisa;

    printf("Masukkan jumlah tiket yang ingin dibeli : ");
    scanf("%d", &jmTiket);

    jm3 = jmTiket / 3;
    sisa = jmTiket - jm3 * 3;

    printf("Anda membayar sebesar : Rp %d", jm3 * ( 2 * 50000) + sisa * 50000 );

    return 0;
}
