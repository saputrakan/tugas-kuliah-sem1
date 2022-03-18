#include <stdio.h>
#include <stdlib.h>
int main()
{
/*Menentukan banyaknya uang pecahan yang dibutuhkan, urut dari pecahan terbesar (100000,50000,20000,10000,5000,2000,1000 (2)*/
int ratusan, limapul, duapul, sepul, lima, dua, serib, jml, sisa;

    printf("Masukkan uang : ");
    scanf("%d", &jml);

    ratusan = jml / 100000;
    sisa = jml - (ratusan * 100000);

    limapul = sisa / 50000;
    sisa = sisa - (limapul * 50000);

    duapul = sisa / 20000;
    sisa = sisa - (duapul * 20000);

    sepul = sisa / 10000;
    sisa = sisa - (sepul * 10000);

    lima = sisa / 5000;
    sisa = sisa - (lima * 5000);

    dua= sisa / 2000;
    sisa = sisa - (dua * 2000);

    serib = sisa / 1000;
    sisa = sisa - (serib * 1000);

    printf("%d Lembar 100000\n",ratusan );
    printf("%d Lembar 50000 \n", limapul );
    printf("%d Lembar 20000 \n", duapul );
    printf("%d Lembar 10000 \n", sepul);
    printf("%d Lembar 5000 \n", lima);
    printf("%d Lembar 2000 \n", dua );
    printf("%d Lembar 1000 \n", serib );
return 0;
}
