#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  naik, tabungan, biaya, sisa ;
    int bulan = 0 ;
    printf("Masukkan Biaya Haji : ") ;
    scanf("%f", &biaya) ;
    printf("Masukkan Tabungan Per Bulan: ") ;
    scanf("%f", &tabungan) ;
    printf("Masukkan Kenaikan Per Tahun (%%) : ") ;
    scanf("%f", &naik) ;
    sisa = biaya;
    do
    {
    bulan++;
    sisa = sisa - tabungan;
    if(bulan % 12 == 0)
        sisa = sisa + (naik /100 * biaya);
    }
    while(sisa > 0);
    printf("Waktu lunas biaya haji selama : %d bulan", bulan);

    return 0;
}
