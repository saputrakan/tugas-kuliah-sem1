#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gaji, tunSumis, tunAnak, jumAnak, masaKerjaTah, masaKerjaBul, thr, thrBul, tunTra, pajak, polis;

    printf("Masukkan gaji perbulan : ");
    scanf("%d", &gaji);
    printf("Berapa anak yang anda miliki : ");
    scanf("%d", &jumAnak);
    printf("Berapa kali anda bekerja dalam setahun : ");
    scanf("%d", &masaKerjaTah);
    masaKerjaBul = masaKerjaTah / 12;
    polis = 20000;

    tunSumis = 0.1 * gaji;
    tunAnak = 0.05 * gaji * jumAnak;
    thr = 5000 * masaKerjaTah;
    thrBul = thr / 12;
    tunTra = 3000 * masaKerjaBul;
    pajak = 0.15 * (gaji + tunSumis + tunAnak);

    printf("Pendapatan perbulan anda sebsesar : %d",gaji + tunSumis + tunAnak + thrBul - pajak + tunTra - polis);

    return 0;
}
