#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu, sisi;
    float volume, jari, tinggi;

    printf("Menu penghitungan : \n");
    printf("1. Menghitung volume kubus\n");
    printf("2. Menghitung luas lingkaran\n");
    printf("3. Menghitung volume silinder\n");
    printf("Pilih menu yang anda inginkan : ");
    scanf("%d", &menu);

    switch(menu){
    case 1 : {
        printf("Masukkan pajang sisi kubus : ");
        scanf("%d", &sisi);
        printf("Volume kubus dari panjang sisi %d adalah %d", sisi, sisi * sisi* sisi);
        break;
        }
    case 2 : {
        printf("Masukkan jari jari lingkaran : ");
        scanf("%f", &jari);
        printf("Luas lingkaran berjari-jari %.0f adalah %.3f", jari, 3.14 * jari * jari  );
        break;
        }
    case 3 : {
        printf("Masukkan jari-jari silinder: ");
        scanf("%f", &jari);
        printf("Masukkan tinggi silinder ");
        scanf("%f", &tinggi);
        printf("Volume silinder dari jari-jari %.0f dan memiliki tinggi %.0f adalah %.3f", jari, tinggi, 3.14 * jari * jari * tinggi);
        break;
        }
    default :
        printf("Kesalahan");
    }
    return 0;
}
