#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Menerima masukan sebuah variabel dengan format int dan char kemudian
menampilkannya kembali*/
    int angka;
    char huruf;

    printf("Masukkan huruf : ");
    scanf("%c", &huruf);
    printf("Masukkan angka : ");
    scanf("%d", &angka);

    printf("Kamu kelas %d%c", angka, huruf);

    return 0;
}
